#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;

	if (!lst)
		return ;
	while (*lst)
	{
		list = *lst;
		if (del)
			del(list->content);
		(*lst) = (*lst)->next;
		free(list);
	}
}
