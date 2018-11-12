/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:23:26 by humarque          #+#    #+#             */
/*   Updated: 2018/11/12 17:01:02 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sc;
	unsigned char	*temp;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	if (!(temp = (unsigned char *)malloc(sizeof(char) * n + 1)))
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
	return (dst);
}
