/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:36:33 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:36:35 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static	int	ft_count_word(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	if (s[i] != c)
		count = 1;
	else
		count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static char	*ft_split(char const *s, char c, int *len)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (i == 0)
		return (ptr);
	i = 0;
	ptr = (char *)malloc((i + 1) * sizeof(char));
	while (s[i] != c && s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	*len = i;
	ptr[i] = '\0';
	return (ptr);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**arr;
	int		len;
	int		j;

	i = 0;
	len = 0;
	j = 0;
	if ((arr = (char **)malloc((ft_count_word(s, c) + 1) *
		sizeof(char *))) == NULL)
		return (NULL);
	if (s[0] != c)
		arr[j++] = ft_split(s, c, &len);
	i += len;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			arr[j++] = ft_split(s + i + 1, c, &len);
			i += len;
		}
		i++;
	}
	arr[j] = NULL;
	return (arr);
}
