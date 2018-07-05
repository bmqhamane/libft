/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmqhama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:47:49 by bmqhama           #+#    #+#             */
/*   Updated: 2018/06/05 21:51:10 by bmqhama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (src < des)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((char *)des)[i] = ((char *)src)[i];
		}
	}
	else
	{
		while (i < len)
		{
			((char *)des)[i] = ((char*)src)[i];
			i++;
		}
	}
	return (des);
}
