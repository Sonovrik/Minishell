#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int count;

	if (s)
	{
		count = 0;
		while (s[count] != '\0')
			ft_putchar_fd(s[count++], fd);
	}
}
