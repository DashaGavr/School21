/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:36:48 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:36:50 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char*	tmp;
	size_t	i;

	i = 0;
	tmp = (char *)malloc((len - start + 1) * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	while (i < len)
		tmp[i++] = s[start++];
	tmp[i] = '\0';
	return (tmp);
}
