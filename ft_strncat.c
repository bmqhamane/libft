/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmqhama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:27:08 by bmqhama           #+#    #+#             */
/*   Updated: 2018/06/05 22:11:28 by bmqhama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *des, const char *src, size_t n)
{
	size_t des_len;
	size_t i;

	i = 0;
	des_len = 0;
	while (des[des_len] != '\0')
		des_len++;
	while (i < n && src[i])
	{
		des[des_len + i] = src[i];
		i++;
	}
	des[des_len + i] = '\0';
	return (des);
}
