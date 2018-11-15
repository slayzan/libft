/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 12:16:21 by humarque          #+#    #+#             */
/*   Updated: 2018/11/15 14:59:12 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int neg;

	neg = 0;
	if (nb < 0)
	{
		ft_putchar_fd('-');
		if (nb == (-2147483648))
		{
			ft_putchar_fd('2');
			ft_putchar_fd('1');
			return (ft_putnbr(47483648));
		}
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar_fd(nb % 10 + '0');
}
