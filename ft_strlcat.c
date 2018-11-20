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
