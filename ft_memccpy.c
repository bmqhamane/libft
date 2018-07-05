/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmqhama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:35:37 by bmqhama           #+#    #+#             */
/*   Updated: 2018/06/05 21:43:34 by bmqhama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *des, const void *src, int c, size_t n)
{
	unsigned char			*p;
	const unsigned char		*b;
	size_t					i;

	p = des;
	b = src;
	i = 0;
	while (i < n)
	{
		p[i] = b[i];
		if ((unsigned char)b[i] == (unsigned char)c)
			return ((char *)des + i + 1);
		i++;
	}
	return (NULL);
}
