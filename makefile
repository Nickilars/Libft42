CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libft.a
DEPS = libft.h

all : $(NAME)

%.o : %.c $(DEPS)
	$(CC) -o $@ -c $<  $(FLAGS)

$(NAME) : $(OBJ)
	$(CC) -o $@ $^ $(FLAGS)

re : fclean $(NAME)

clean : rm -rf %.o

fclean : $(CLEAN)
	$(RM) $(NAME)

.PHONY: all re clean fclean 
