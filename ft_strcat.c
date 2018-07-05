/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmqhama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 13:18:38 by bmqhama           #+#    #+#             */
/*   Updated: 2018/06/05 21:57:16 by bmqhama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *des, char *src)
{
	int i;
	int j;

	i = 0;
	while (des[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		des[i + j] = src[j];
		j++;
	}
	des[i + j] = '\0';
	return (des);
}