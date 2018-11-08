/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:16:14 by humarque          #+#    #+#             */
/*   Updated: 2018/11/08 14:29:51 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*sc;
	size_t	i;

	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = sc[i];
		n++;
	}
	dst[i] = '\0';
	return (dst);
}
