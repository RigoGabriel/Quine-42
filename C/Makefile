COLLEEN = Colleen
GRACE = Grace
OS = $(shell uname)

OBJDIR = ./objs

SRCS = Colleen.c \
				Grace.c

OBJ	= $(addprefix $(OBJDIR)/,$(SRCS:.c=.o))

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: obj $(COLLEEN) $(GRACE)

obj:
		@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.c
		$(CC) $(CFLAGS) -o $@ -c $<

$(COLLEEN): $(OBJ)
		$(CC) -o $@ $(OBJDIR)/$@.o

$(GRACE): $(OBJ)
		$(CC) -o $@ $(OBJDIR)/$@.o

clean:
		rm -rf $(OBJDIR) Grace_kid.c

fclean: clean
		rm -f $(COLLEEN) $(GRACE)

re: fclean all

.PHONY: all clean fclean re
