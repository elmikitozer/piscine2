NAME = rush-02

SRC = main.c ft_tools.c rush-02.c

SRCS_DIR = ./srcs/

SRCS = ${addprefix $(SRCS_DIR), $(SRC)}

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Werror -Wextra

H_DIR = ./includes/

CC = cc

all:	${NAME}

.c.o:
	${CC} ${FLAGS} -I ${H_DIR} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
