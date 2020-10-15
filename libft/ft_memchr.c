#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*stroke;
	unsigned char	symbol;

	symbol = (unsigned char)c;
	stroke = (unsigned char*)s;
	count = 0;
	while (count < n)
	{
		if (stroke[count] == symbol)
			return (&stroke[count]);
		count++;
	}
	return (0);
}
