# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmurakam <tmurakam@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 17:27:06 by tmurakam          #+#    #+#              #
#    Updated: 2020/06/23 00:35:45 by tmurakam         ###   ########.fr        #
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
			./ft_tolower.c \
			./ft_strlen.c  \
			./strlcpy.c
#./strlcat.c
#./strchr.c
#./strrchr.c
#./strnstr.c
#./strncmp.c
#./atoi.c
#./memset.c
#./bzero.c
#./memcpy.c
#./memccpy.c
#./memmove.c
#./memchr.c
#./memcmp.c






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
