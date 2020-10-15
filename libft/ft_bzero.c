#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			count;
	unsigned char	*stroke;

	stroke = (unsigned char *)s;
	count = 0;
	while (n > count)
	{
		stroke[count] = '\0';
		count++;
	}
}
