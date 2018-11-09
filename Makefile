# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: humarque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 12:34:25 by humarque          #+#    #+#              #
#    Updated: 2018/11/09 17:05:54 by humarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

source  = ft_memset.c  ft_bzero.c  ft_memcpy.c  ft_memccpy.c  ft_memcmp.c  ft_memmove.c  ft_memset.c  ft_strcat.c  ft_strcpy.c  ft_strdup.c  ft_strlen.c  ft_strncat.c  ft_strncpy.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c ft_atoi.c 

incld = ./includes/

flag = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	gcc -c $(flag) $(source) -I $(incld)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
