CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS1 = ft_printf.c  $(shell find ./function ./helpers -name "*.c" -type f) 

OBJS = $(SRCS1:.c=.o)

NAME = libftprintf.a

all: $(NAME) clean

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	@rm -rf $(OBJS)

fclean:
	@rm -rf $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re