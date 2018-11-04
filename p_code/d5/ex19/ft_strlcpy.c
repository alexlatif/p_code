/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:40:37 by alatif            #+#    #+#             */
/*   Updated: 2018/10/30 15:40:53 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len_src;

	len_src = 0;
	while ((src[len_src] != '\0') && ((len_src + 1) < size))
	{
		dest[len_src] = src[len_src];
		len_src++;
	}
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	if ((size < len_src) && (size > 0))
		dest[size - 1] = '\0';
	else
		dest[len_src] = '\0';
	return (len_src);
}
