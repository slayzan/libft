# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: humarque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 12:34:25 by humarque          #+#    #+#              #
#    Updated: 2018/11/09 14:46:45 by humarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

source  = ft_memset.c  ft_bzero.c  ft_memcpy.c  ft_memccpy.c  ft_memcmp.c  ft_memmove.c  ft_memset.c  ft_strcat.c  ft_strcpy.c  ft_strdup.c  ft_strlen.c  ft_strncat.c  ft_strncpy.c 

incld = ./includes/

flag = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	gcc -c $(flag) $(source) -I $(incld)
	ar rc $(NAME) *.o

clean:
	rm -f *.o
