CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRCS		= ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_atoi.c \
				ft_strncmp.c \
				ft_memcmp.c \
				ft_itoa.c \
				ft_strdup.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_split.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strmapi.c \
				ft_substr.c \
				ft_strnstr.c \
				ft_bzero.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putnbr_fd.c \
				ft_putendl_fd.c \
				ft_calloc.c \
				ft_memset.c \
				ft_memchr.c \
				ft_memcpy.c \
				ft_memove.c \
				ft_striteri.c \
SRCS_BONUS	= ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \ 
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c \
OBJ			= $(SRCS:.c=.o)
OBJ_BONUS	= $(SRCS_BONUS:.c=.o)
NAME		= libft.a
DEPS		= libft.h
RM			= rm -rf

%.o:%.c 	$(DEPS)
			$(CC) -o $@ -c $<  $(CFLAGS)

$(NAME):	$(OBJ)
			ar -rc $(NAME) $(OBJ)
			ranlib $(NAME)

bonus:		$(OBJ_BONUS)
			ar -rc $(NAME) $(OBJ_BONUS)
			ranlib $(NAME)

all:		$(NAME)

re:			fclean all

clean:		
	$(RM) *.o

fclean:		clean
	$(RM) $(NAME)

.PHONY: all re clean fclean bonus
