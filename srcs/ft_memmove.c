/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:23:26 by humarque          #+#    #+#             */
/*   Updated: 2018/11/08 15:53:04 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*sc;
	char	*temp;
	size_t	i;

	i = 0;
	dst = (unsigned char)dest;
	sc = (unsigned char)src;
	if (!(temp = (char *)malloc(sizeof(char) * n + 1)))
		return (NULL);
	while (i < n)
	{
		temp[i] = sc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dst[i] = temp[i];
		i++;
	}
	dst = '\0';
	return (dst);
}
