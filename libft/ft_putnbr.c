/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:09:10 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:09:12 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static	int	rank(int n)
{
	if (n >= 1000000000)
		return (1000000000);
	if (n >= 100000000)
		return (100000000);
	if (n >= 10000000)
		return (10000000);
	if (n >= 1000000)
		return (1000000);
	if (n >= 100000)
		return (100000);
	if (n >= 10000)
		return (10000);
	if (n >= 1000)
		return (1000);
	if (n >= 100)
		return (100);
	if (n >= 10)
		return (10);
	if (n >= 1)
		return (1);
	return (1);
}

void		ft_putnbr(int n)
{
	char	c;
	int		rank_n;

	if (n == -2147483648)
	{
		write(1, "-2", 2);
		n %= 1000000000;
		n *= -1;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	rank_n = rank(n);
	while (rank_n > 0)
	{
		c = n / rank_n + '0';
		n = n % rank_n;
		rank_n /= 10;
		write(1, &c, 1);
	}
}
