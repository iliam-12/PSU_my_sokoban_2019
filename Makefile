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

all: $(NAME) joker

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -lncurses

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

ECHO	=	/bin/echo -e
DEFAULT	=	"\e[0m"
BOLD_T	=	"\e[1m"
UNDLN_T	=	"\e[4m"
BLACK_C	=	"\e[30m"
RED_C	=	"\e[31m"
GREEN_C	=	"\e[32m"
YELLO_C	=	"\e[33m"
BLUE_C	=	"\e[34m"
MAGEN_C	=	"\e[35m"
CYAN_C	=	"\e[36m"
WHITE_C	=	"\e[97m"
UNDERLINE	=	"\e[100m"
LINE_RETURN	=	$(ECHO) ""
COLOR_THEME	=	$(GREEN_C)
DEBUG_THEME	=	$(CYAN_C)

joker:
	@$(ECHO) $(BOLD_T)"               "$(YELLO_C)"_"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"              "$(YELLO_C)"(_)          "$(GREEN_C)"_"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"          "$(RED_C)"_         "$(DEFAULT)".=.   "$(GREEN_C)"(_)"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"         "$(RED_C)"(_)"$(DEFAULT)"   _   //(')_"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"              //'\/ |\ 0'\\"
	@$(ECHO) $(BOLD_T)"              ||-.\_|_/.-||"$(BLACK_C)"		    ============ "$(MAGEN_C) "===========" $(BLACK_C) "==========          "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"              )/ |_____| \(    "$(BLUE_C)"_"$(MAGEN_C)"              _______   _-_-_   _   _    _____   _____  "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"             0   #/\ /\#  0   "$(BLUE_C)"(_)"$(BLACK_C)"             \__   _\ |  _  | | | / /  | ____\ |  _  ) "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"                _| o o |_"$(GREEN_C)"		         | |   | | | | | |/ /   | \__   | |/ /	 "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"         "$(CYAN_C)"_     "$(WHITE_C)"((|, ^ ,|))"$(BLACK_C)"		      ___| |   | |_| | |  _  \  | /___  |  _ \	 "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"        "$(CYAN_C)"(_)     "$(WHITE_C)"'||\_/||'"$(MAGEN_C)"		     /_____|   |_____| |_/ \__\ |_____| |_| \_\ "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"                 || _ ||      "$(MAGEN_C)"_"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"                 | \_/ |     "$(MAGEN_C)"(_)"$(BLACK_C)"	    ============ "$(MAGEN_C) "===========" $(BLACK_C) "==========          "$(DEFAULT)
	@$(ECHO) $(BOLD_T)"             0.__.\   /.__.0"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"              '._  ' '   _.'"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"                 /  '"$(RED_C)"JÖKER"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"               0'-' )/''-0"$(UNDLN_T)$(GREEN_C)"		[SUCCESSFUL COMPILATION]"$(DEFAULT)
	@$(ECHO) $(BOLD_T)"                   0'"$(DEFAULT)
