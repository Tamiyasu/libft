# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmurakam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 17:27:06 by tmurakam          #+#    #+#              #
#    Updated: 2020/06/22 21:44:49 by tmurakam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
RM = rm -f
SRCS 	=	./ft_isascii.c \
			./ft_isalpha.c \
			./ft_isalnum.c \
			./ft_isdigit.c \
			./ft_isprint.c \
			./ft_toupper.c \
			./ft_tolower.c
#./srcs/ft_putchar.c \
#./srcs/ft_putstr.c  \
#			./srcs/ft_strcmp.c  \
#			./srcs/ft_strlen.c  \
#			./srcs/ft_swap.c
OBJS	= 	${SRCS:.c=.o}
all:	${NAME}
${NAME}:	${OBJS}
	ar rc ${NAME} $^
.c.o:
	gcc -Wall -Wextra -Werror -I./includes -c $< -o $@
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re:	fclean all
.PHONY: all clean fclean re
