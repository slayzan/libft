# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: humarque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 12:34:25 by humarque          #+#    #+#              #
#    Updated: 2018/11/08 15:21:27 by humarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

source  = ./srcs/ft_memset.c  ./srcs/ft_bzero.c  ./srcs/ft_memcpy.c  ./srcs/ft_memccpy.c 

incld = ./includes/

flag = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	gcc -c $(flag) $(source) -I $(incld)
	ar rc $(NAME) *.o

clean:
	rm -f *.o
