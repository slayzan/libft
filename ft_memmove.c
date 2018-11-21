/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:23:26 by humarque          #+#    #+#             */
/*   Updated: 2018/11/21 11:48:14 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sc;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	temp = NULL;

	if(sc < dst)
		ft_memcpy(dst,sc,n);
	else
	{
		
	}
	
	return (dst);
}
