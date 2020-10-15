#include "parser.h"

void		*xmalloc(size_t len)
{
	void	*tmp;

	tmp = malloc(len);
	if (!tmp)
	{
		ft_putstr_fd("Error: The memory could not be allocated\n", 1);
		exit(2);
	}
	return (tmp);
}
