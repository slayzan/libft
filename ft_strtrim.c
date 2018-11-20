/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:24:47 by humarque          #+#    #+#             */
/*   Updated: 2018/11/20 16:48:00 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_findstart(char const *s)
{
	int i;

	i = 0;
	while((s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t') && (s[i]))
		i++;
	return (i);
}

int	ft_findend(char const *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	i--;
	while((s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t') && (i != 0))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	char		*str;
	int			start;
	int			end;
	int			i;
	int			len;

	start = ft_findstart(s);
	end = ft_findend(s);
	len = ft_strlen(s);
	i = 0;
	if(start == len && end == 0)
		start = end + 1;
	while(s[i])
		i++;
	i = len;
	if (!(str =(char *) malloc(sizeof(char) * ((end - start) + 2))))
		return (NULL);
	i = 0;
	while(start <= end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
