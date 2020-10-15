#include "parser.h"

void	sigquit(int sig)
{
	sig = 0;
	if (g_str1)
	{
		write(1, "\b\b", 2);
		return ;
	}
	g_str1[ft_strlen(g_str1) - 1] = '\0';
	write(1, "\nshell > ", 8);
	return ;
}

void	sigint(int sig)
{
	sig = 0;
	if (g_str1 && ft_strlen(g_str1))
	{
		free(g_str1);
		g_str1 = (char *)xmalloc(sizeof(char));
		g_str1[0] = '\0';
	}
	g_error = 1;
	write(1, "\nshell > ", 8);
}
