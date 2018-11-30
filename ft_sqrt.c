/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 18:16:21 by humarque          #+#    #+#             */
/*   Updated: 2018/11/30 21:02:22 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
