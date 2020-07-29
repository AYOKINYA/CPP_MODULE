NAME = megaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS =  megaphone.cpp

OBJS = $(SRCS:.c=.o)

RM = rm -f

%.o : %.c
		${CC} ${CFLAGS} -c $< -o $@

$(NAME) : ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o $(NAME)
	
all :	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all