/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 23:59:58 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/27 00:00:00 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (content == NULL)
	{
		ptr->content = NULL;
		ptr->content_size = 0;
		ptr->next = NULL;
		return (ptr);
	}
	ptr->content = (void *)malloc(content_size);
	ptr->content = ft_memcpy(ptr->content, content, content_size);
	ptr->content_size = content_size;
	ptr->next = NULL;
	return (ptr);
}
