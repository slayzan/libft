/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:01:49 by humarque          #+#    #+#             */
/*   Updated: 2018/11/15 14:57:03 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_display_size(int size)
{
	printf(" size = %d", size);
}

int		ft_countsize(int n, int neg)
{
	int size;
	int save;
	
	save = n;
	size = 0;
	if(neg == 1)
		save = save * -1;
	while(save > 9)
	{
		save = save / 10;
		size++;
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
		neg = 1;
	size = ft_countsize(n,neg);
	if(!(value = malloc(sizeof(char) * ((size + neg) + 1))))
		return (NULL);
	if (neg == 1)
		value[0] = '-';
	i  = 1;	
	while ()
	{
		printf("tt");
		value[i] = (n % 10 - '0');
		n = n / 10;
		i++;
	}
	return (value);
}

int main()
{
	printf("%s", ft_itoa(9369));
}
