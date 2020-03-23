/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:34:32 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:34:33 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	j = 0;
	printf("%s#\n", dest);
	printf("%s$\n", src);
	i = strlen(dest);
	if (n == 0)
		return (i);
	if (n - 1 < i)
		return (strlen(src) + n);
	while (i < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

int main ()
{
	char	buf[10];

	bzero(buf, 10);
	printf("%ld\n",ft_strlcat(buf, "abcdefghijklmnop", 10));
}