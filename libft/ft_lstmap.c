/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkanata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 23:59:45 by mkanata           #+#    #+#             */
/*   Updated: 2019/09/26 23:59:46 by mkanata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list * (*f) (t_list *elem) )
{
	t_list *ptr;
	t_list *tmp;

	tmp = NULL;
	ptr = tmp;
	while (lst != NULL)
	{
		if ((tmp = (t_list *)malloc(sizeof(t_list))) == NULL)
			return (NULL);
		tmp = f(lst);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (ptr);
}
