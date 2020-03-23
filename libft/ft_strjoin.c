/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:34:18 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:34:20 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		j;

	if (s1 == NULL && s2 == NULL)
		return ((char *)NULL);
	if (s1 == NULL || s1[0] == '\0')
		return (ft_strdup(s2));
	if (s2 == NULL || s2[0] == '\0')
		return (ft_strdup(s1));
	i = ft_strlen(s2);
	j = ft_strlen(s1);
	if ((tmp = (char *)malloc(i + j - 1)) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		tmp[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		tmp[j++] = s2[i++];
	tmp[j] = '\0';
	return (tmp);
}
