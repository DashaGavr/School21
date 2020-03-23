/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:05:38 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:05:41 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char *tmp;

	if (s == NULL)
		return (NULL);
	tmp = (char *)s;
	while (n > 0)
	{
		(*tmp) = c;
		tmp++;
		n--;
	}
	return (s);
}
