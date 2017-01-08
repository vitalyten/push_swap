# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/27 19:33:21 by vtenigin          #+#    #+#              #
#    Updated: 2017/01/07 17:38:53 by vtenigin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = push_swap
NAME2 = checker

FILES1 = push_swap.c readinput.c swap.c push.c rot.c revrot.c
FILES2 = checker.c readinput.c swap.c push.c rot.c revrot.c

OBJECTS1 = $(FILES1:.c=.o)
OBJECTS2 = $(FILES2:.c=.o)

CFLAG = -Wall -Werror -Wextra

ATTACH = -L libft/ -lft

all: $(NAME1) $(NAME2)

$(NAME1):
	# make -C libft/
	gcc $(CFLAG) -o $(NAME1) $(FILES1) $(ATTACH)

$(NAME2):
	gcc $(CFLAG) -o $(NAME2) $(FILES2) $(ATTACH)

clean:
	/bin/rm -f $(OBJECTS1) $(OBJECTS2)
	# make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME1) $(NAME2)
	# make -C libft/ fclean

re: fclean all