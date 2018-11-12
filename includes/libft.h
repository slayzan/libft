/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:32:25 by humarque          #+#    #+#             */
/*   Updated: 2018/11/12 19:39:57 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# define _GNU_SOURCE

void		*ft_memset (void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);i
int			ft_strlen(char *str);
int        	ft_atoi(char *str);
int			ft_strcmp(char *s1, char *s2);
int			isalpha(int c);
int        	ft_isalpha(int c);
int        	ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int         ft_isprint(int c);
int			toupper(int c);
int			tolower(int c);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strncat(char *dest, char *src, int nb);
char		*strchr(const char *s, int c);
char		*strrchr(const char *s, int c);
char    	*ft_strdup(char *src);
char		*ft_strstr(char *str, char *to_find);
char    	*ft_strcpy(char *dest, char *src);
char    	*ft_strcat(char *dest, char *src);
char    	*ft_strstr(char *str, char *to_find);
#endif
