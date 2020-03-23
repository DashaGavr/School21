/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:36:08 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:36:09 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *h, const char *s, size_t n)
{
	size_t i;
	size_t j;
	size_t cur;

	i = 0;
	if (s == NULL)
		return ((char *)h);
	while (h[i] != '\0' && i < n)
	{
		j = 0;
		cur = i;
		while (s[j] == h[cur] && s[j] != '\0' && cur < n)
		{
			j++;
			cur++;
		}
		if (s[j] == '\0')
			return ((char *)h + i);
		i++;
	}
	return (NULL);
}
