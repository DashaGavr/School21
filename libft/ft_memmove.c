/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:05:55 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:05:56 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	if (dest == NULL || src == NULL)
		return (NULL);
	if ((tmp = (char*)malloc(sizeof(char*) * n)) == NULL)
		return (NULL);
	tmp = ft_strncpy(tmp, src, n);
	dest = (void*)ft_strncpy(dest, tmp, n);
	free(tmp);
	return (dest);
}
