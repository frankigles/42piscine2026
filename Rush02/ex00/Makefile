NAME	= rush-02

SRCS	= main.c ft_args.c ft_build_power.c ft_checks.c ft_dict.c ft_error.c ft_putstr.c ft_strstr.c

OBJS	= ${SRCS:.c=.o}

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

%.o: %.c rush02.h
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re