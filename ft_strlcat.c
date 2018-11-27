/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:28:08 by humarque          #+#    #+#             */
/*   Updated: 2018/11/27 13:45:59 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

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

int main()
{
	char dest[50] = {0};
	char dest2[50] = {0};
	size_t          i, j, k;

	if (strlcat(dest, "Hello", 4) != ft_strlcat(dest2, "Hello", 4))
	{
		printf("no");
	}
	memset(dest, 0, sizeof(dest));
	memset(dest2, 0, sizeof(dest));
	j = strlcat(dest, "Hello ", 4);
	k = ft_strlcat(dest2, "Hello ", 4);
	if (strcmp(dest, dest2) != 0 || j != k)
	{
		printf("no 2");
		return (0);
	}
	j = strlcat(dest, "Hello ", 1);
	k = ft_strlcat(dest2, "Hello ", 1);
	if (strcmp(dest, dest2) != 0 || j != k)
	{

		printf("no 3");
		return (0);
	}
	i = 0;
	while (i < 6)
	{
		dest[4 + i] = 'z';
		dest2[4 + i] = 'z';
		++i;
	}
	j = strlcat(dest, "abc", 6);
	k = ft_strlcat(dest2, "abc", 6);
	if (strcmp(dest, dest2) != 0 || j != k)
	{
		printf("no 4");
		return (0);
	}	
			return (1);
}
