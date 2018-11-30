# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: humarque <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 12:34:25 by humarque          #+#    #+#              #
#    Updated: 2018/11/30 21:22:29 by humarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

source  = ft_memset.c  ft_bzero.c  ft_memcpy.c  ft_memccpy.c  ft_memcmp.c  ft_memmove.c  ft_memset.c  ft_strcat.c  ft_strcpy.c  ft_strdup.c  ft_strlen.c  ft_strncat.c  ft_strncpy.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_memchr.c ft_strmapi.c ft_toupper.c ft_memchr.c ft_strcat.c ft_strstr.c ft_strnstr.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strrev.c ft_strnstr.c ft_strrchr.c ft_strchr.c ft_strlcat.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c  ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_freetab.c ft_find_next_prime.c  ft_is_prime.c ft_sqrt.c

OBJECTS =  ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memcmp.o ft_memmove.o ft_memset.o ft_strcat.o ft_strcat.o ft_strcpy.o ft_strdup.o ft_strlen.o ft_strncat.o ft_strncpy.o ft_strchr.o ft_strrchr.o ft_strcmp.o ft_strncmp.o ft_atoi.o ft_memchr.o ft_strmapi.o ft_toupper.o ft_strstr.o ft_strnstr.o ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_tolower.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_strsplit.o ft_itoa.o ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_strrev.o ft_strrchr.o ft_strchr.o ft_strlcat.o ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_freetab.o ft_find_next_prime.o ft_is_prime.o ft_sqrt.o

incld = ./includes/

flag = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	gcc -c $(flag) $(source) -I $(incld)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
