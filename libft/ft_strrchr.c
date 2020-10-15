#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				count;
	unsigned char	symbol;

	count = ft_strlen(s);
	symbol = (unsigned char)c;
	while (count >= 0)
	{
		if (s[count] == symbol)
			return ((char *)&s[count]);
		count--;
	}
	return (0);
}
