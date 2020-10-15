#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	a;
	unsigned char	*h;

	h = (unsigned char *)b;
	a = (unsigned char)c;
	count = 0;
	while (count < len)
	{
		h[count] = a;
		count++;
	}
	return (b);
}
