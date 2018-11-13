# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: humarque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 12:34:25 by humarque          #+#    #+#              #
#    Updated: 2018/11/13 17:40:25 by humarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

source  = ft_memset.c  ft_bzero.c  ft_memcpy.c  ft_memccpy.c  ft_memcmp.c  ft_memmove.c  ft_memset.c  ft_strcat.c  ft_strcpy.c  ft_strdup.c  ft_strlen.c  ft_strncat.c  ft_strncpy.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_memchr.c ft_strmapi.c ft_toupper.c ft_memchr.c ft_strcat.c ft_strlcat.c ft_strstr.c ft_strnstr.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

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

re: fclean all
