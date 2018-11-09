/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:35:20 by humarque          #+#    #+#             */
/*   Updated: 2018/11/09 16:39:58 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	char *str;

	str = (char *)s;
	i = 0;
	while(str[i])
		i++;
	while(i > 0)
	{
		if((unsigned char)str = (unsigned char)c)
			return (str + i);
		i--;
	}
	return (NULL);
}

