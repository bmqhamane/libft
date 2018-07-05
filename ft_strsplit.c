/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmqhama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 00:06:00 by bmqhama           #+#    #+#             */
/*   Updated: 2018/06/06 00:07:49 by bmqhama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_wordcount(char const *s, char c)
{
	unsigned int	counter1;
	int				counter2;

	counter1 = 0;
	counter2 = 0;
	while (s[counter1])
	{
		while (s[counter1] == c)
			counter1++;
		if (s[counter1] != '\0' && s[counter1] != c)
			counter2++;
		while (s[counter1] && (s[counter1] != c) && s[counter1] != '\0')
			counter1++;
	}
	return (counter2);
}

static char			*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char				**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c)) + 1);
	if (tab == NULL)
		return (NULL);
	while (s[i] && tab != NULL)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > j)
			tab[k++] = ft_strndup(s + j, i - j);
	}
	tab[k] = NULL;
	return (tab);
}
