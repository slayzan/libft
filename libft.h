/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:32:25 by humarque          #+#    #+#             */
/*   Updated: 2018/11/14 16:03:52 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# define _GNU_SOURCE

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
int			ft_strlen(char *str);
int			ft_atoi(char *str);
int			ft_strcmp(char *s1, char *s2);
int			isalpha(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			toupper(int c);
int			tolower(int c);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strncat(char *dest, char *src, int nb);
char		*strchr(const char *s, int c);
char 		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*strrchr(const char *s, int c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(char *src);
char		*ft_strnew(size_t size);
char		*ft_strtrim(char const *s);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strstr(char *str, char *to_find);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strcat(char *dest, char *src);
char		*ft_strstr(char *str, char *to_find);
char		*ft_itoa(int n);
char		**ft_strsplit(char const *s, char c);
#endif