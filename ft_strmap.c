
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char 	*str;

	i = 0;
	if (!(str = malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
