NAME	=	push_swap
CHECK	=	checker

SRCS	=	main.c push.c radix.c reverse_rotate.c rotate.c \
		short_size.c short_size_2.c swap.c check_args.c \
		index_stack.c push_swap_utils.c push_swap_utils_2.c \
		ft_lst.c \

CHECK_SRCS	=	ft_lst.c index_stack.c check_args.c \
			push_swap_utils.c push_swap_utils_2.c \
			reverse_rotate.c push.c swap.c rotate.c \
			checker.c \

OBJS	=	${SRCS:%.c=%.o}
CHECK_OBJS	=	${CHECK_SRCS:%.c=%.o}

CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I ./includes
LIBFT	=	./libft/libft.a


RM	=	rm -rf

all:	${NAME} ${CHECK}
${NAME}: ${OBJS}
	@echo "\033[0;33m\nCOMPILING LIBFT\n"
	@${MAKE} -C ./libft
	@echo "\033[1;32m\nLIBFT created\n"
	@echo "\033[0;33m\nCOMPILING PUSH_SWAP\n"
	@${CC} ${CFLAGS} ${OBJS} ${LIBFT} -o ${NAME}
	@echo "\033[1;32m\nPUSH_SWAP created\n"

${CHECK}: ${CHECK_OBJS}
	@echo "\033[0;33m\nCOMPILING CHECKER\n"
	@${CC} ${CFLAGS} ${CHECK_OBJS} ${LIBFT} -o ${CHECK}
	@echo "\033[1;32m\nCHECKER created\n"

clean:
	@echo "\033[0;31mDELETING LIBFT files\nPUSH_SWAP...\n & CHECKER....\n"
	@${MAKE} clean -C ./libft fclean
	@${RM} ${OBJS}
	@${RM} ${CHECK_OBJS}
	@echo "033[1;32mDONE\n"

fclean: clean
	@echo "\033[0;31mDELETING PUSH_SWAP & CHECKER EXECUTABLE...."
	@${RM} ${NAME}
	@${RM} ${CHECK}
	@echo "\033[1;32mDONE\n"

re: fclean all
