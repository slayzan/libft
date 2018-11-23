/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:01:49 by humarque          #+#    #+#             */
/*   Updated: 2018/11/23 17:14:54 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countsize(int n)
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

	neg = 0;
	if ( n < 0)
	{
		neg = 1;
		n = n * -1;
	}
	size = ft_countsize(n);
	if(!(value = malloc(sizeof(char) * ((size + neg) + 1))))
		return (NULL);
	i = 0;
	while (n > 9)
	{
		value[i] = (n % 10 + '0');
		i++;
		n = n / 10;
	}
	value[i] = n + '0';
	i++;
	if(neg == 1)
		value[i] = '-';
	i++;
	value[i] = '\0';
	return (ft_strrev(value));
}


/*int main()
{
	char n[40] = "99999999999999999999999999";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	printf("%d", i2); 
}*/
