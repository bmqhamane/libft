/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmqhama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:17:56 by bmqhama           #+#    #+#             */
/*   Updated: 2018/06/05 21:46:15 by bmqhama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int character, size_t size)
{
	unsigned char	*point;
	int				i;

	i = 0;
	point = (unsigned char*)str;
	while (size > 0)
	{
		point[i] = character;
		i++;
		size--;
	}
	return (str);
}
