/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:01:49 by humarque          #+#    #+#             */
/*   Updated: 2018/11/14 18:20:01 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_display_size(int size)
{
	printf(" size = %d", size);
}

char		*ft_itoa(int n)
{
	char 	*value;
	size_t	i;
	int		size;
	int		save;
	int		neg;


	size = 0;
	neg = 0;
	save = n;
	if (save < 0)
	{
		neg = 1;
		save = save * -1;
	}
	while (save > 9)
	{
		save = save /  10;
		size++;
	}
	if(!(value = malloc(sizeof(char) * ((size + 1 + neg) + 1))))
		return (NULL);
	while(i < size)
		i++;
	while(i > 0)
	{
		value[i] = (n % 10) + '0';
	 	i--;
	}
	return (value);
}

int main()
{
	ft_itoa(-9369);
}
