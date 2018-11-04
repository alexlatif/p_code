/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 03:54:01 by alatif            #+#    #+#             */
/*   Updated: 2018/11/02 03:54:17 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// include stdlib for NULL
// print range in reverse
// begin at end and end at start
// use len and decrement to fill from end of arr
// fill start value and either decrement or increment whether end or start is greater

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int		*arr;
	int		i;
	int		len;

	i = 0;
	len = (end >= start) ? ((end - start) + 1) : ((start - end) + 1);
	if (!(arr = malloc(sizeof(int) * len)))
		return (NULL);
	while (len--)
		arr[len] = (end >= start) ? start++ : start--;
	return (arr);
}
