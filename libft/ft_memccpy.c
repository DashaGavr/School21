/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:06:16 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:06:18 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int *tmpd;
	int *tmps;

	tmpd = (int *)dest;
	tmps = (int *)src;
	while (n > 0 && *tmps != c)
	{
		*tmpd = *tmps;
		tmps++;
		tmpd++;
		n--;
	}
	if (*tmps == c)
		return ((void *)tmpd);
	else
		return (NULL);
}
