/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:04:26 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:04:29 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	int		*ptr;
	size_t	i;

	ptr = (int *)malloc(size);
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (i < size)
		ptr[i++] = 0;
	return ((void *)ptr);
}
