/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmidori <lmidori@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 14:53:09 by drina             #+#    #+#             */
/*   Updated: 2020/10/02 19:23:47 by lmidori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list		*list;
	t_list		*list_first;

	if (!lst || !f)
		return (NULL);
	list = ft_lstnew(f(lst->content));
	if (!list)
		return (NULL);
	list_first = list;
	while (lst->next != NULL)
	{
		lst = lst->next;
		list->next = ft_lstnew(f(lst->content));
		if (!(list->next))
		{
			ft_lstclear(&list_first, del);
			return (NULL);
		}
		list = list->next;
	}
	return (list_first);
}
