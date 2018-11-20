/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:48:31 by humarque          #+#    #+#             */
/*   Updated: 2018/11/20 16:16:54 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlencat(char const *s1, char const *s2)
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
	char  *str;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!(str = malloc(sizeof(char) * (ft_strlencat(s1, s2) + 1))))
		return (NULL);
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return ((char *)str);
}

/*int main()
{
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	char *res = ft_strjoin(s1, s3);
	printf("%s",ft_strjoin(s1,s3));
}*/
