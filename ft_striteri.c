

#include "libft.h"

void	ft_streri(char *s, void	(*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	while(s[i])
	{
		f(i,&s[i]);
		i++;
	}	
}
