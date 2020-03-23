/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:04:45 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:04:52 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int		*cur;

	i = 0;
	cur = (int *)s;
	while (i < n && (unsigned char)cur[i] != (unsigned char)c)
		i++;
	if (cur[i] == c)
		return ((void *)cur + i);
	else
		return (NULL);
}
