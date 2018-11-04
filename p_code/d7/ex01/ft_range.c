/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:57:47 by alatif            #+#    #+#             */
/*   Updated: 2018/10/31 14:58:11 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	int		i;

	i = 0;
	if ((min >= max) || !(arr = malloc(sizeof(int) * ((max - min) + 1))))
		return (0);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	arr[i] = '\0';
	return (arr);
}
