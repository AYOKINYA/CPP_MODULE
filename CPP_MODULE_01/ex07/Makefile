NAME = replace

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS =  main.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

%.o : %.cpp
		${CC} ${CFLAGS} -c $< -o $@

$(NAME) : ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o $(NAME)
	
all :	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all