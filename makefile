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
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

re : fclean $(NAME)

clean : rmf  %.o

fclean : $(CLEAN)
	$(RM) $(NAME)

.PHONY: all re clean fclean 
