/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:12:03 by humarque          #+#    #+#             */
/*   Updated: 2018/11/28 16:24:27 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int		ft_count_words(char const *str, char c)
{
	int i;
	int resultat;

	i = 0;
	resultat = 0;
	while (str[i])
	{
		while((str[i] != c && str[i]))
			i++;
		if(((str[i] == c) && (str[i - 1] != c) && (i != 0))	|| (str[i + 1] == '\0' && str[i] != c) || 
				(str[i] == '\0' && str[i -1] != c ))
			resultat++;
		while(str[i] ==	c)
			i++;
	}
	return (resultat);
}

static int		ft_len(char const *str, int index , char c)
{
	int i;
	int length;

	i = index;
	length = 0;
	while (str[i] && str[i] != c)
	{
		length++;
		i++;
	}
	return (length);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		k;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	k = 0;
	if (s && c)
	{
		tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
		if (tab == NULL)
			return (0);
		while (j < ft_count_words(s ,c))
		{
			while (s[i] == c)
				i++;
			if (!(tab[j] = malloc(sizeof(char) * (ft_len(s, i, c) + 1))))
				return (0);
			while (s[i] != c && s[i])
				tab[j][k++] = s[i++];
			tab[j][k] = '\0';
			j++;
			k = 0;
		}
		tab[j] = 0;
		return (tab);
	}
	return (NULL);	
}
