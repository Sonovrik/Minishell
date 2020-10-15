#include "parser.h"

int			redact_env(t_env **envp, char *name, char *value)
{
	t_env	*tmp;

	tmp = *envp;
	while (tmp)
	{
		if (ft_strncmp(tmp->key_value[0], name,
			ft_strlen(tmp->key_value[0]) + 1) == 0)
		{
			tmp->visible = 1;
			if (value != NULL)
			{
				free(tmp->key_value[1]);
				tmp->key_value[1] = ft_strdup(value);
			}
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
