/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 12:33:02 by alatif            #+#    #+#             */
/*   Updated: 2018/10/31 12:33:20 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (!(dest = malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
