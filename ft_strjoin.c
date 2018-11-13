/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:48:31 by humarque          #+#    #+#             */
/*   Updated: 2018/11/13 18:00:58 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlencat(char const *s1, char const *s2)
{
	int i;
	int resultat;

	i = 0;
	resultat = 0;
	while(s1[i])
	{
		resultat++;
		i++;
	}
	i = 0;
	while(s2[i])
	{
		i++;
		resultat++;
	}
	return (resultat);
}

char * ft_strjoin(char const *s1, char const *s2)
{
	char const *str;
	size_t i;

	i = 0;
	if (!(str = malloc(sizeof(char) * (ft_strlencat(s1, s2) + 1))))
		return (NULL);
	str = ft_strcat((char *)s1,(char *)s2);
	return ((char *)str);
}

int main()
{
	char s1[255] = "heelo ";
	char s2[255] = "world";

	printf("%s\n", ft_strjoin(s1,s2));
}
