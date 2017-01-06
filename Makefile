# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/27 19:33:21 by vtenigin          #+#    #+#              #
#    Updated: 2017/01/05 18:50:09 by vtenigin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FILES = main.c push_swap.c swap.c push.c rot.c revrot.c

OBJECTS = $(FILES:.c=.o)

CFLAG = -Wall -Werror -Wextra

ATTACH = -L libft/ -lft

all: $(NAME)

$(NAME):
	# make -C libft/
	gcc $(CFLAG) -o $(NAME) $(FILES) $(ATTACH)

clean:
	/bin/rm -f $(OBJECTS)
	# make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	# make -C libft/ fclean

re: fclean all