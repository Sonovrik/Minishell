#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*stroke_src;
	unsigned char	*stroke_dst;

	stroke_dst = (unsigned char *)dst;
	stroke_src = (unsigned char *)src;
	count = 0;
	if (!stroke_dst && !stroke_src)
		return (stroke_dst);
	while (count < n)
	{
		stroke_dst[count] = stroke_src[count];
		count++;
	}
	return (stroke_dst);
}
