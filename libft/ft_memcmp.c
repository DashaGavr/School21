/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:42:56 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:42:57 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0 || str1 == NULL || str2 == NULL)
		return (0);
	while (n && str1[i] == str2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return ((str1[i - 1] - str2[i -1]));
	else 
		return ((str1[i] - str2[i]));	
}
