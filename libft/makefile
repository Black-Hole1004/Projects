# NAME = libft.a
# SRC = ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strnstr.c \
#         ft_atoi.c ft_isascii.c ft_memcpy.c ft_strlcat.c    ft_strrchr.c \
#         ft_bzero.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_tolower.c \
#         ft_calloc.c  ft_isprint.c ft_memset.c ft_strlen.c ft_toupper.c \
#         ft_isalnum.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_strjoin.c ft_substr.c \
# 		ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c \
# 		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
# 				ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# OBJECT = $(SRC:.c=.o)

# BONUS_OBJECT = $(BONUS_SRC:.c=.o)

# CC = cc

# CFLAGS = -Wall -Wextra -Werror

# all : $(NAME)

# $(NAME) : $(OBJECT) libft.h
# 	ar rc $(NAME) $(OBJECT)

# %.o: %.c libft.h
# 	cc $(CFLAGS) -c $< -o $@

#  #so: #for linux os
# # 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
# # 	cc -nostartfiles -shared -o libft.so $(OBJECT)

# bonus : $(OBJECT) $(BONUS_OBJECT)
# 	ar rc $(NAME) $(OBJECT) $(BONUS_OBJECT)

# so_bonus:
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(BONUS_SRC)
# 	gcc -nostartfiles -shared -o libft.so $(BONUS_OBJECT)
# clean :
# 	rm -f $(OBJECT) $(BONUS_OBJECT)

# fclean : clean
# 	rm -f $(NAME)

# re : fclean all

# .PHONY : clean fclean all re bonus
NAME = libft.a

SRC = ft_memset.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_bzero.c \
                ft_isalnum.c ft_isprint.c ft_toupper.c ft_tolower.c \
                 ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strlen.c \
                 ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_isascii.c \
                 ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
                 ft_memmove.c ft_strdup.c ft_putnbr_fd.c ft_putstr_fd.c \
                 ft_putchar_fd.c ft_itoa.c ft_putendl_fd.c ft_substr.c \
                 ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c \
                 ft_split.c

SRCB = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c \
                    ft_lstsize.c ft_lstdelone.c ft_lstclear.c

OBJ = $(SRC:%.c=%.o)

OBJB = $(SRCB:%.c=%.o)

CFALGS =  -Wall -Wextra -Werror

CC = gcc

INCLUDE = libft.h



all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.c $(INCLUDE)
	$(CC) -c $(CFALGS) $< -o $@

bonus: $(OBJ) $(OBJB)
	ar rc $(NAME) $(OBJB) $(OBJ)

clean:
	rm -rf $(OBJ) $(OBJB)

fclean: clean
	rm -rf $(NAME)

re: fclean all