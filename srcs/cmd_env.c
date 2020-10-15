#include "parser.h"

void		cmd_env(t_env *head)
{
	t_env *tmp;

	tmp = head;
	g_error = 0;
	while (tmp != NULL)
	{
		if (tmp->visible == 1 && tmp->key_value[1] != NULL)
		{
			ft_putstr_fd(tmp->key_value[0], 1);
			write(1, "=", 1);
			ft_putstr_fd(tmp->key_value[1], 1);
			write(1, "\n", 1);
		}
		tmp = tmp->next;
	}
}
