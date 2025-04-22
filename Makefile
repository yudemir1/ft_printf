SRCS = ft_printf.c ft_putchar.c ft_puthexnbr.c ft_putnbr.c ft_putpointer.c \
		ft_putstr.c ft_putunsigned.c
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re