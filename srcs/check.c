#include "parser.h"

int			skip_only_spaces(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
		i++;
	return (i);
}

int			check_cond(char *str)
{
	return ((ft_strncmp(str, "cd", ft_strlen(str) + 1) == 0) ||
			(ft_strncmp(str, "pwd", ft_strlen(str) + 1) == 0) ||
			(ft_strncmp(str, "env", ft_strlen(str) + 1) == 0) ||
			(ft_strncmp(str, "unset", ft_strlen(str) + 1) == 0) ||
			(ft_strncmp(str, "echo", ft_strlen(str) + 1) == 0) ||
			(ft_strncmp(str, "exit", ft_strlen(str) + 1) == 0) ||
			(ft_strncmp(str, "export", ft_strlen(str) + 1) == 0));
}
