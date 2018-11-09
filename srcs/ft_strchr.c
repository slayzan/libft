/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:31:18 by humarque          #+#    #+#             */
/*   Updated: 2018/11/09 16:35:07 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;
	char *str;

	i = 0;

	str = (char *)s;
	while(str[i])
	{
		if((unsigned char)str[i] = (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}