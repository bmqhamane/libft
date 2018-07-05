/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmqhama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:36:43 by bmqhama           #+#    #+#             */
/*   Updated: 2018/06/05 21:41:01 by bmqhama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *src, size_t n)
{
	char		*p;
	char		*b;
	size_t		i;

	p = (char *)des;
	b = (char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = b[i];
		i++;
	}
	return (des);
}
