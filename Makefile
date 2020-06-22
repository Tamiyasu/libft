NAME	=	ftlib.a		
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I./includes
SRC_DIR	=	./srcs
RM      =	rm -f
OBJS	= 	${SRC_DIR}/main.o 
all		: ${NAME}
${NAME}	: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
clean	:
	${RM} ${OBJS}
fclean	: clean
	${RM} ${NAME}
.PHONY	: all clean fclean
