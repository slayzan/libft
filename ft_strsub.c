/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:32:41 by humarque          #+#    #+#             */
/*   Updated: 2018/11/13 16:43:41 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_strlent(unsigned int start , size_t len)
{
	int resultat;

	resultat = 0;
	while(start < len)
	{
		resultat++;
		start++;
	}
	return (resulat);
}


char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	
	i = 0;
	if(!(str = malloc(sizeof(char) * (ft_strlent(start, len) + 1))))
		return (NULL);
	while (start < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
