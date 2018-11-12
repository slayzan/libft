/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:16:43 by humarque          #+#    #+#             */
/*   Updated: 2018/11/12 17:05:46 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char cont *s, char (*f)(unsigned int,char))
{
	size_t	i;
	char	*str;
	char *d;
	
	d = (char *)s;
	i = 0;
	if (!(str = malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (d[i])
	{
		str[i] = f(i, d[i]);
		i++;
	}
	return (str);

}
