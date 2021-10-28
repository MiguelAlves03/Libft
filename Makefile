
NAME = libft.a

SRC= ft_memset ft_bzero ft_memcpy ft_memmove ft_memcmp ft_substr ft_putchar_fd ft_putendl_fd\
ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr ft_strdup ft_striteri ft_putstr_fd\
ft_strncmp ft_isalpha ft_isdigit ft_isalnum ft_memchr ft_calloc ft_strtrim ft_strmapi\
ft_isascii ft_isprint ft_toupper ft_tolower ft_strnstr ft_atoi ft_strjoin ft_split ft_itoa ft_putnbr_fd\


BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear\
ft_lstiter ft_lstmap\

RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.


all:$(NAME)

$(NAME): $(SRC:=.o)
		ar rc $(NAME) $(SRC:=.o)

clean:
	$(RM)	$(SRC:=.o) $(BONUS:=.o)

fclean: clean
		$(RM)	$(NAME)

re:	fclean	$(NAME)

bonus:	$(SRC:=.o)	$(BONUS:=.o)
		ar rc $(NAME) $(SRC:=.o) $(BONUS:=.o)

.PHONY: all bonus clean fclean re .c.o