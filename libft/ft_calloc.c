#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*list;

	list = (void *)xmalloc(size * count);
	ft_bzero(list, size * count);
	return (list);
}
