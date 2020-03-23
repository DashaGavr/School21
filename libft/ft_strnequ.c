/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:55:23 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 21:55:25 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	int		flag;

	i = 0;
	flag = 1;
	while (i < n && (flag = s1[i] == s2[i]) && s1[i] != '\0')
		i++;
	if (flag && (s1[i] == '\0' || i == n))
		return (1);
	return (0);
}
