/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:28:08 by humarque          #+#    #+#             */
/*   Updated: 2018/11/26 14:32:03 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t lendst;
	size_t lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	j = 0;
	if (size > lendst)
	{
		while (dst[i] && i < (size - 1))
		{
			i++;
		}
		while (*src && i < (size - 1))
		{
			dst[i] = src[j];
			j++;
			i++;
		}

		return (lendst + lensrc);
	}
	return (lensrc + size);
}
