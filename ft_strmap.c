/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmqhama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 15:52:56 by bmqhama           #+#    #+#             */
/*   Updated: 2018/06/06 00:03:20 by bmqhama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*nstr;

	if (!f || !s)
		return (NULL);
	i = 0;
	nstr = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (nstr)
	{
		while (s[i])
		{
			nstr[i] = f(s[i]);
			i++;
		}
		nstr[i] = '\0';
	}
	return (nstr);
}
