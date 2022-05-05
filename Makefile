# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 09:00:09 by creyt             #+#    #+#              #
#    Updated: 2022/05/05 14:14:10 by creyt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
HEAD = push_swap.h
CC = gcc
CFLAGS = -Werror -Wextra -Wall -g -fsanitize=address
OBJS = ${SRCS:.c=.o}
SRCS = src/ft_atol.c \
		src/ps_swap.c \
		src/main.c
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

.PHONY: all clean fclean re
