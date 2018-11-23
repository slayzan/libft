/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 18:53:49 by humarque          #+#    #+#             */
/*   Updated: 2018/11/23 17:40:16 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

void		*ft_memset (void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void 		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar(char c);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putnbr(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strlen(char const *str);
int			ft_atoi(char *str);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_isalpha(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strncmp(const char *s1, const char *s2, unsigned int n);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strncat(char *dest, const char *src, size_t nb);
char		*ft_strchr(const char *s, int c);
char 		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strrchr(const char *s, int c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(char const *src);
char 		*ft_strnstr(const char	*str, const char *to_find, size_t n);
char		*ft_strnew(size_t size);
char		*ft_strtrim(char const *s);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strstr(char *str, char *to_find);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strcat(char *dest, char const *src);
char		*ft_strstr(char *str, char *to_find);
char		*ft_itoa(int n);
char		*ft_strrev(char *str);
char		**ft_strsplit(char const *s, char c);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
#endif
