/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:24:47 by humarque          #+#    #+#             */
/*   Updated: 2018/11/14 14:05:19 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	ft_findstart(char const *s)
{
	int i;
	
	i = 0;
	while((s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t') && (s[i]))
		i++;
	return (i);
}

static int	ft_findend(char const *s)
{
	int i;
	int save;

	i = 0;
	while(s[i])
		i++;
	save = i;
	while((s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t') && (i != 0))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	char const *str;
	int			start;
	int			end;
	int			i;
	int			len;

	start = ft_findstart(s);
	end = ft_findend(s);
	i = 0;
	while(s[i])
		i++;
	i = len;
	if (start == 0 && end == len)
		return (s);
	if (!(str = malloc(sizeof(char) * ((end - start) + 1))))
		return (NULL);
	i = 0;
	while(start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
