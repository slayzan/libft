
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *d;
	if(!(d = (void *)malloc(size)))
		return (NULL);
	ft_bzero(d, 0, size);
	return (d);
}
