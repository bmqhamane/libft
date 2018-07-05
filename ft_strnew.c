/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmqhama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 10:01:11 by bmqhama           #+#    #+#             */
/*   Updated: 2018/06/05 23:53:02 by bmqhama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*new_st;

	i = 0;
	new_st = (char *)malloc(sizeof(char) * size + 1);
	if (!new_st)
		return (NULL);
	while (i < size)
	{
		new_st[i] = '\0';
		i++;
	}
	new_st[i] = '\0';
	return (new_st);
}
