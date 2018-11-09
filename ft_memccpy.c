/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:56:19 by humarque          #+#    #+#             */
/*   Updated: 2018/11/08 15:50:14 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft__memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dst;
	char	*sc;
	size_t	i;

	dst = (char *)dest;
	sc = (char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = sc[i];
		if ((unsigned char)dst[i] == (unsigned char)c) // dst = char * mais c = unsigned conflit type
			return (dst + i + 1);  // pointeur apres c
		i++;
	}
	return (NULL);
}
