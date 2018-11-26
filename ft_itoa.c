/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:01:49 by humarque          #+#    #+#             */
/*   Updated: 2018/11/26 17:53:07 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
static int		ft_countsize(int n)
{
	int size;
	int save;

	save = n;
	size = 0;
	while(save > 9)
	{
		size++;
		save = save / 10;
	}
	return (size + 1);
}


char		*ft_itoa(int n)
{
	char 	*value;
	size_t	i;
	int		size;
	int		neg;
	unsigned int nb;

	neg = 0;
	if (n < 0)
	{
		neg = 1;
		nb = n * -1;
	}
	else
		nb = n;
	//printf("%d\n %d\n", n,neg);
	//printf("%d", ft_countsize((n)));
	size = ft_countsize(nb);
	if(!(value = malloc(sizeof(char) * ((size + neg) + 1))))
		return (NULL);
	i = 0;
	while (nb > 9)
	{
		value[i] = (nb % 10 + '0');
		i++;
		nb = nb / 10;
	}
	value[i] = nb + '0';
	i++;
	if(neg == 1)
		value[i] = '-';
	i++;
	value[i] = '\0';
	return (ft_strrev(value));
}


/*int main()
{
	printf("%s",ft_itoa((-2147483647 -1)));
	printf("%d", itoa((-2147483647 -1)));
}*/
