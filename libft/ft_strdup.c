#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*list;

	list = (char *)xmalloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!list)
		return (NULL);
	ft_memcpy(list, s1, ft_strlen(s1) + 1);
	return (list);
}
