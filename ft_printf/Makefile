# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 13:18:08 by ahmaymou          #+#    #+#              #
#    Updated: 2022/11/08 15:46:10 by ahmaymou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printf.c\
		ft_printf.c\
		ft_printf_utils.c\
		ft_putchar_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

CC = cc

echo1 = @echo "\033[92mCompiled ft_printf successfully !!! :) \033[0m"
echo2 = @echo "\033[92mCompiled bonus files successfully !!! :) \033[0m"
echo3 = @echo "\033[36mArchive created successfully !!! :) \033[m"
echo4 = @echo "\033[31mbonus added to the archive successfully !!! :) \033[m"
all : $(NAME)

%.o: %.c ft_printf.h
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) ft_printf.h
	@$(echo1)
	@ar rc $(NAME) $(OBJ)
	#@cd libft && make bonus && cp libft.a ../
	@$(echo3)

clean :
	@rm -rf $(OBJ)
fclean : clean
	@rm -rf $(NAME) libft.a

re :fclean all