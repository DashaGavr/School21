/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:36:20 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:36:20 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*cur;

	i = 0;
	cur = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			cur = (char *)(s + i);
		i++;
	}
	if (s[i] == (char)c)
		cur = ((char *)s + i);
	return ((char *)cur);
}
