/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:37:47 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:37:49 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		before;
	int		after;
	char	*tmp;

	i = 0;
	before = 0;
	while ((s[before] == ' ' || s[before] == '\n'
		|| s[before] == '\t') && s[before] != '\0')
		before++;
	i = before;
	while (s[i] != '\0')
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			after = i;
		i++;
	}
	tmp = (char *)malloc((after - before + 2) * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (before <= after)
		tmp[i++] = s[before++];
	tmp[i] = '\0';
	return (tmp);
}
