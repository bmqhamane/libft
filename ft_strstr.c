/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmqhama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:33:15 by bmqhama           #+#    #+#             */
/*   Updated: 2018/06/05 22:32:31 by bmqhama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	index;

	if (!*s2)
	{
		return ((char *)s1);
	}
	while (*s1)
	{
		index = 0;
		while (s1[index] == s2[index])
		{
			if (!s2[++index])
			{
				return ((char *)s1);
			}
		}
		s1++;
	}
	return (0);
}
