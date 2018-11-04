/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 15:26:27 by alatif            #+#    #+#             */
/*   Updated: 2018/10/31 15:26:45 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int diff;

	diff = (max - min);
	if (!(*range = malloc(sizeof(int) * (max - min))))
		return (0);
	if (min >= max)
		return (0);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (diff);
}
