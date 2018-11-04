/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 12:51:17 by alatif            #+#    #+#             */
/*   Updated: 2018/10/30 12:55:14 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *dest)
{
	unsigned int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int src_len;
	unsigned int len;

	i = ft_length(dest);
	src_len = 0;
	len = i;
	while ((src[src_len] != '\0') && ((i + 1) < size))
	{
		dest[i] = src[src_len];
		i++;
		src_len++;
	}
	dest[i] = '\0';
	src_len = 0;
	while (src[src_len] != '\0')
	{
		i++;
		src_len++;
	}
	if (size < len)
		return (size + src_len);
	return (len + src_len);
}
