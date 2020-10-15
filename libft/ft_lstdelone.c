#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*list;

	if (!lst)
		return ;
	if (del)
		del(lst->content);
	list = lst;
	lst = lst->next;
	free(list);
}
