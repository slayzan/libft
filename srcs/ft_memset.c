/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:52:21 by humarque          #+#    #+#             */
/*   Updated: 2018/11/08 13:09:50 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	str = (unsigned char)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
