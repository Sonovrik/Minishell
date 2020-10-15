#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				count;
	unsigned char	symbol;

	count = 0;
	symbol = (unsigned char)c;
	if (symbol == '\0')
	{
		while (s[count] != '\0')
			count++;
		return ((char *)&s[count]);
	}
	while (s[count])
	{
		if (s[count] == c)
			return ((char *)&s[count]);
		count++;
	}
	return (0);
}
