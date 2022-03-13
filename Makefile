SRCS		= src/main.c \
		src/ft_check_errors.c \
		src/ft_create_list.c \
		src/indexing.c \
		src/push_functions.c \
		src/push_swap_instructions1.c \
		src/reverse_rotate_functions.c \
		src/rotate_functions.c \
		src/sort_small_stack.c \
		src/swap_functions.c \
		src/ft_push_swap_utils.c \
		src/sort_big_stack.c

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