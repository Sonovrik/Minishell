#include "parser.h"

void		cmd_pwd(void)
{
	char	*pwd;

	g_error = 0;
	pwd = getcwd(NULL, 0);
	ft_putstr_fd(pwd, 1);
	write(1, "\n", 1);
	free(pwd);
}
