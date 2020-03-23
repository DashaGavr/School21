/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:37:21 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:37:22 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *h, const char *n)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	if (n == NULL)
		return ((char *)h);
	while (h[i] != '\0')
	{
		j = 0;
		len = i;
		while (n[j] != '\0' && n[j] == h[i])
		{
			j++;
			i++;
		}
		if (n[j] == '\0')
			return ((char *)h + len);
		i++;
	}
	return (NULL);
}
