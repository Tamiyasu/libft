# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmurakam <tmurakam@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 17:27:06 by tmurakam          #+#    #+#              #
#    Updated: 2020/06/24 21:02:23 by tmurakam         ###   ########.fr        #
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
			./ft_strlcpy.c \
			./ft_strlcat.c \
			./ft_strchr.c \
			./ft_strrchr.c \
			./ft_strnstr.c \
			./ft_strdup.c \
			./ft_strncmp.c
#./ft_atoi.c
#./ft_memset.c
#./ft_bzero.c
#./ft_memcpy.c
#./ft_memccpy.c
#./ft_memmove.c
#./ft_memchr.c
#./ft_memcmp.c
#./ft_calloc.c
#./ft_itoa.c
#./ft_putchar_fd.c
#./ft_putendl_fd.c
#./ft_putnbr_fd.c
#./ft_putstr_fd.c
#./ft_split.c
#./ft_strjoin.c
#./ft_strmapi.c
#./ft_strtrim.c
#./ft_substr.c
#./ft_lstadd_back.c
#./ft_lstadd_front.c
#./ft_lstclear.c
#./ft_lstdelone.c
#./ft_lstiter.c
#./ft_lstlast.c
#./ft_lstmap.c
#./ft_lstnew.c
#./ft_lstsize.c

OBJS	= 	${SRCS:.c=.o}
all:	${NAME}
$(NAME):	${OBJS}
	ar rc ${NAME} $^
.c.o:
	gcc -Wall -Wextra -Werror -I./includes -c $< -o $@
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re:	fclean all
.PHONY: all clean fclean re
