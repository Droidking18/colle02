# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/28 14:39:27 by rmdaba            #+#    #+#              #
#    Updated: 2018/01/28 15:12:03 by rmdaba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SRC = srcs/main.c srcs/funcs.c srcs/check.c srcs/rush00.c \
	  srcs/rush01.c srcs/rush_alpha.c \
	  srcs/rush02.c srcs/rush03.c \
	  srcs/rush04.c srcs/ft_res.c
HEADER = includes/

all:
	gcc -Wall -Werror -Wextra -o $(NAME) -I$(HEADER) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean
