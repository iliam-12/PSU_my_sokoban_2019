NAME	= my_sokoban

CC	= gcc

RM	= rm -f

SRCS	= ./my_sokoban.c \
	  ./my_str_to_word_array.c \
	  ./my_putstr.c \
	  ./my_putchar.c \
	  ./admin.c \
	  ./error.c \
	  ./key_command1.c \
	  ./key_command.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -lncurses

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
