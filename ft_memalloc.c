/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmqhama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 09:23:52 by bmqhama           #+#    #+#             */
/*   Updated: 2018/06/05 22:27:29 by bmqhama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = (void*)malloc(sizeof(void*) * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
