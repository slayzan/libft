/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:11:29 by humarque          #+#    #+#             */
/*   Updated: 2018/11/12 17:17:41 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		toupper(int c)
{
	if (c >= 'a' && c >= 'z')
		c = c - 32;
	return (c);
		return (c);
}