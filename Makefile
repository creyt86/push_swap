# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 09:00:09 by creyt             #+#    #+#              #
#    Updated: 2022/06/21 15:26:38 by creyt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
HEAD = push_swap.h
CC = gcc
CFLAGS = -Werror -Wextra -Wall -g# -fsanitize=address
OBJS = ${SRCS:.c=.o}
SRCS =	src/ps_check_errors.c \
		src/ps_index.c \
		src/ps_malloc.c \
		src/ps_push.c \
		src/ps_reverse.c \
		src/ps_rotate.c \
		src/ps_sort_max.c \
		src/ps_sort_med.c \
		src/ps_sort_min.c \
		src/ps_swap.c \
		src/ps_utils.c \
		src/push_swap.c
LBFT_PATH = libft/
FT_PRINTF_PATH = ft_printf/
LIB = libft/libft.a ft_printf/libftprintf.a

RM = rm -f

all: ${NAME}

$(NAME):	$(OBJS)
		@$(MAKE) -C $(LBFT_PATH)
		@$(MAKE) -C $(FT_PRINTF_PATH)
		$(CC) $(OBJS) $(CFLAGS) -o $(NAME) $(LIB)

%o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	${RM} ${OBJS}
	@$(MAKE) -C $(LBFT_PATH) clean
	@$(MAKE) -C $(FT_PRINTF_PATH) clean

fclean: clean
	${RM} ${NAME}
	@$(MAKE) -C $(LBFT_PATH) fclean
	@$(MAKE) -C $(FT_PRINTF_PATH) fclean

re: fclean all

test: all
	cp push_swap ../push_swap_tester
	bash ../push_swap_tester/tester.sh

.PHONY: all clean fclean re
