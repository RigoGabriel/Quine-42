COLLEEN = Colleen
OS = $(shell uname)

OBJDIR = ./objs

SRCS = Colleen.c

OBJ	= $(addprefix $(OBJDIR)/,$(SRCS:.c=.o))

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: obj $(COLLEEN)

obj:
		@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.c
		$(CC) $(CFLAGS) -o $@ -c $<

$(COLLEEN): $(OBJ)
		$(CC) $(OBJ) -lm -o $(COLLEEN)

clean:
		rm -rf $(OBJDIR)

fclean: clean
		rm -f $(COLLEEN)

re: fclean all

.PHONY: all clean fclean re
