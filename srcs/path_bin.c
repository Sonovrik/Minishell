#include "parser.h"

char		**path_bin(t_env **head)
{
	t_env	*tmp;
	char	**str;

	str = NULL;
	tmp = (*head);
	while (tmp != NULL)
	{
		if ((ft_strncmp(tmp->key_value[0], "PATH=",
			ft_strlen(tmp->key_value[0]))) == 0)
		{
			str = ft_split(tmp->key_value[1], ':');
			break ;
		}
		tmp = tmp->next;
	}
	return (str);
}
