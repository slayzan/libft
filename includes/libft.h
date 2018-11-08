/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:32:25 by humarque          #+#    #+#             */
/*   Updated: 2018/11/08 17:05:47 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void		*ft_memset (void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void 		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void 		*ft_memmove(void *dest, const void *src, size_t n);
void 		*ft_memchr(const void *s, int c, size_t n);
int 		ft_memcmp(const void *s1, const void *s2, size_t n);
int  		ft_strlen(char *str);
int  		ft_strlen(char *str);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strncat(char *dest, char *src, int nb);
#endif
