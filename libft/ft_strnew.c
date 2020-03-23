/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:35:59 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:36:00 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char*	ptr;
	size_t	i;

	ptr = (char *)malloc(size * sizeof(char));
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (i < size)
		ptr[i++] = '\0';
	return (ptr);
}
