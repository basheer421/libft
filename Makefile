NAME = libft.a
FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c\
ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c\
ft_substr.c ft_tolower.c ft_toupper.c
BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
ft_lstiter.c ft_lstmap.c
CC = cc	
CFLAGS = -Wall -Wextra -Werror
OBJS = $(FILES:.c=.o)
BONUS_OBJS = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): # 		Make .o files and make .a file
	$(CC) $(CFLAGS) -c $(FILES) && ar rcs $(NAME) $(OBJS)

clean: #		Removes all .o files
	rm -f $(OBJS)

fclean:	clean # Removes the .a file
	rm -f $(NAME)

re:	fclean all #			Removes .a file and redo

bonus:
	$(CC) $(CFLAGS) -c $(FILES) $(BONUS_FILES) && ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)