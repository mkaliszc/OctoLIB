NAME = libft.a

FT = is/ft_isdigit is/ft_isprint is/ft_isalpha is/ft_isascii is/ft_isalnum is/ft_isspace \
    ft_toupper ft_tolower \
    mem/ft_memset mem/ft_bzero mem/ft_calloc mem/ft_memchr mem/ft_memcmp mem/ft_memcpy  mem/ft_memmove \
    str/ft_strlen str/ft_strncmp str/ft_atoi str/ft_strchr str/ft_strdup str/ft_strlcat str/ft_strlcpy str/ft_strnstr str/ft_strrchr \
    str/ft_substr str/ft_strjoin str/ft_strtrim str/ft_split str/ft_itoa str/ft_strmapi str/ft_striteri \
    fd/ft_putchar_fd fd/ft_putstr_fd fd/ft_putendl_fd fd/ft_putnbr_fd \
    lst/ft_lstnew lst/ft_lstadd_front lst/ft_lstsize lst/ft_lstlast lst/ft_lstadd_back lst/ft_lstdelone lst/ft_lstclear lst/ft_lstiter lst/ft_lstmap \
    get_next_line/get_next_line \
    ft_printf/ft_hexa_printf ft_printf/ft_put_printf ft_printf/ft_printf \

SOURCES = $(addprefix src/, $(addsuffix .c, $(FT)))
OBJS = $(addprefix obj/, $(addsuffix .o, $(FT)))

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude
AR = ar

all: $(NAME)

obj/%.o: src/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) -rcs $@ $^

clean:
	rm -rf obj

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
 
