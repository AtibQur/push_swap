SRCS		= main.c ft_push_swap_utils.c ft_check_errors.c ft_create_list.c push_swap_instrucs1.c \
			sort_small_stack.c sort_stack_function.c 

OBJS		= $(SRCS:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -g -fsanitize=address

NAME		= push_swap
LIBFT		= ./libft/libft.a

all:		$(NAME)

$(LIBFT):
	$(MAKE) -C ./libft

$(NAME): 	$(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)
	@echo "\033[92mDone\033[0m"
clean:
	rm -f $(OBJS) $(LIBFT)
	$(MAKE) -C libft/ clean
	@echo "\033[92mClean\033[0m"
fclean:		clean
	rm -f $(NAME)
	$(MAKE) -C libft/ clean
	@echo "\033[92mFclean\033[0m"
re:			fclean all

.PHONY:		all clean fclean re