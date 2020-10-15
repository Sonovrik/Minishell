
.PHONY: all re fclean clean

NAME = minishell

SRC = minishell.c lst_args.c read_arg.c init_arg_env.c \
        find_len_arg.c struct_funcs.c get_env_args.c parser.c path_bin.c cmd_cd.c \
        start_programm.c select_cmd.c diff_cmd.c print_export.c redact_env.c \
        lst_env.c find_in_env.c check.c cmd_unset.c get_value_env.c get_name_env.c \
        cmd_echo.c get_arg.c cmd_export.c xmalloc.c cmd_exit.c \
        add_new_env.c cmd_pwd.c cmd_env.c start_errors.c double_spec.c \
        special_parser.c free_list_copy.c redirect.c cmd_pipe.c error_and_free.c \
        last_spec.c commands.c start_programm_pipe.c signals.c\

DIR_SRC = srcs/

DIR_OBJ = objects/

LIBFTDIR = libft/

SRCS = $(addprefix $(DIR_SRC),$(SRC))

OBJS = $(addprefix $(DIR_OBJ),$(SRC:.c=.o))

SRCO = $(SRC:.c=.o)

CC = gcc

OK_COLOR=\x1b[32;01m

DELETE_COLOR=\x1b[31;01m

LIBFT = $(LIBFTDIR)libft.a

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(FLAGS) -L$(LIBFTDIR) -lft $(SRCS) -o $(NAME)
	@echo "$(OK_COLOR)Minishell was successfully compiled"
	@tput sgr0

$(LIBFT):
	@make -C $(LIBFTDIR)

$(DIR_OBJ)%.o: $(DIR_SRC)%.c $(DIR_SRC)parser.h
	@mkdir -p objects
	@$(CC) $(FLAGS) -I $(DIR_SRC) -c $< -o $@

clean:
	@rm -rf $(DIR_OBJ)
	@make clean -C $(LIBFTDIR)
	@echo "$(DELETE_COLOR)Cleaned $(NAME) objects files"

fclean:
	@make fclean -C $(LIBFTDIR)
	@rm -rf $(DIR_OBJ)
	@echo Cleaned $(NAME) objects files
	@rm -f $(NAME)
	@echo Cleaned $(NAME)

re: fclean all
