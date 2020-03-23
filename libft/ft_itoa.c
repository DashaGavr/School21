/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:04:10 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:04:13 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static	int	rank(int n)
{
	if (n >= 1000000000)
		return (10);
	if (n >= 100000000)
		return (9);
	if (n >= 10000000)
		return (8);
	if (n >= 1000000)
		return (7);
	if (n >= 100000)
		return (6);
	if (n >= 10000)
		return (5);
	if (n >= 1000)
		return (4);
	if (n >= 100)
		return (3);
	if (n >= 10)
		return (2);
	return (1);
}

static	int	pow_dec(int i)
{
	int res;

	res = 1;
	while (i-- > 1)
		res = res * 10;
	return (res);
}

static char	*danger(int n)
{
	char	*ptr;
	int		r;
	int		i;

	ptr = (char *)malloc(11 * sizeof(char));
	ptr[0] = '-';
	ptr[1] = 2 + '0';
	r = pow_dec(9);
	n = n % 1000000000;
	n *= -1;
	i = 2;
	while (r > 0)
	{
		ptr[i++] = n / r + '0';
		n = n % r;
		r /= 10;
	}
	ptr[i] = '\0';
	return (ptr);
}

static void	counter(char *ptr, int n, int rank_n, int i)
{
	while (rank_n > 0)
	{
		ptr[i++] = n / rank_n + '0';
		n = n % rank_n;
		rank_n /= 10;
	}
	ptr[i] = '\0';
}

char		*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		ptr = danger(n);
		return (ptr);
	}
	if (n < 0)
	{
		n *= -1;
		i = 1;
		ptr = (char *)malloc((rank(n) + 2) * sizeof(char));
		ptr[0] = '-';
	}
	else
		ptr = (char *)malloc((rank(n) + 1) * sizeof(char));
	counter(ptr, n, pow_dec(rank(n)), i);
	return (ptr);
}
