# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/27 19:33:21 by vtenigin          #+#    #+#              #
#    Updated: 2017/01/10 19:25:50 by vtenigin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = push_swap
NAME2 = checker

FILES1 = push_swap.c readinput.c swap.c push.c rot.c revrot.c select.c \
		fillop.c sort.c maxmin.c readperif.c
FILES2 = checker.c readinput.c swap.c push.c rot.c revrot.c readperif.c

OBJECTS1 = $(FILES1:.c=.o)
OBJECTS2 = $(FILES2:.c=.o)

CFLAG = -Wall -Werror -Wextra -g

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