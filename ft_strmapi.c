
#include "libft.h"

char	*ft_strmapi(char cont *s, char (*f)(unsigned int,char))
{
	size_t i;
	char *str;
	
	i = 0;
	if (!(str = malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		str[i] = f(i,s[i]);
		i++;
	}
	return (str);

}
