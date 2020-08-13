NAME = ex02

CC = clang++

CFLAGS = -Wall -Wextra -Werror -I .

SRCS =  A.cpp B.cpp C.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

%.o : %.cpp
		${CC} ${CFLAGS} -c $< $(INC) -o $@

$(NAME) : ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o $(NAME)
	
all :	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all