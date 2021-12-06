COLLEEN = Colleen
GRACE = Grace
SULLY = Sully
OS = $(shell uname)

OBJDIR = ./objs

SRCS = Colleen.c \
				Grace.c \
				Sully.c

OBJ	= $(addprefix $(OBJDIR)/,$(SRCS:.c=.o))

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: obj $(COLLEEN) $(GRACE) $(SULLY)

obj:
		@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.c
		$(CC) $(CFLAGS) -o $@ -c $<

$(COLLEEN): $(OBJ)
		$(CC) -o $@ $(OBJDIR)/$@.o

$(GRACE): $(OBJ)
		$(CC) -o $@ $(OBJDIR)/$@.o

$(SULLY): $(OBJ)
		$(CC) -o $@ $(OBJDIR)/$@.o

clean:
		rm -rf $(OBJDIR) Grace_kid.c Sully_*

fclean: clean
		rm -f $(COLLEEN) $(GRACE) $(SULLY)

re: fclean all

.PHONY: all clean fclean re
