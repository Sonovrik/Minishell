#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 1
# include <stdlib.h>
# include <unistd.h>
# include "../srcs/parser.h"

int		get_next_line(int fd, char **line);
int		ft_strlen_gnl(char *list);
char	*ft_strdup_gnl(char *last_list);
char	*ft_strjoin_gnl(char *line, char *list);
char	*ft_strchr_gnl(char *line, int c);

#endif
