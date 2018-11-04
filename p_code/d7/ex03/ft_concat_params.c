/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 20:43:48 by alatif            #+#    #+#             */
/*   Updated: 2018/10/31 20:44:10 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		lcl_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*lcl_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	i = 1;
	len = 0;
	while (i < argc)
		len += (lcl_strlen(argv[i++]) + 1);
	str = malloc(sizeof(char) * (len));
	i = 1;
	j = 0;
	while (i < argc)
	{
		lcl_strcat((str + j), argv[i]);
		j += lcl_strlen(argv[i]);
		str[j++] = '\n';
		i++;
	}
	str[j - 1] = '\0';
	return (str);
}
