/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:12:03 by humarque          #+#    #+#             */
/*   Updated: 2018/11/20 16:20:23 by humarque         ###   ########.fr       */
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
		while((str[i] != c) && (str[i] != '\0'))
			i++;
		if(((str[i] == c) && (str[i - 1] != c)) || (str[i + 1] == '\0' && str[i] != c))
		{
			resultat++;
		}
		while(str[i] ==	c)
			i++;
	}
	return (resultat);
}

int		ft_len(char const *str, int index , char c)
{
	int i;
	int length;

	i = index;
	length = 0;
	while (str[i] != '\0' && str[i] != c)
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

void    ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		i++;
	}
}
