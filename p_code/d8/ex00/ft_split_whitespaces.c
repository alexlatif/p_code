/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 00:46:52 by alatif            #+#    #+#             */
/*   Updated: 2018/11/02 00:47:18 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_find_white(char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\v' || ch == '\t'
	|| ch == '\r' || ch == '\f')
		return (1);
	return (0);
}

char	**ft_alloc_total_len(char *str)
{
	char	**adr;
	int		total_len;
	int		i;

	i = 0;
	total_len = 0;
	while (str[i] != '\0')
	{
		if (!ft_find_white(str[i]))
			total_len++;
		i++;
	}
	adr = malloc(sizeof(char*) * (int)(total_len + 2));
	return (adr);
}

char	*ft_strncpy(char *dest, char *src, int from, int to)
{
	char	*address;
	int		i;
	int		j;

	j = 0;
	i = from;
	address = dest;
	while ((src[i] != '\0') && (i < to))
	{
		dest[j++] = src[i++];
	}
	dest[i] = '\0';
	return (address);
}

char	*ft_putword(char *str, int start, int end)
{
	char	*q;
	int		len_word;

	len_word = ((end - start) + 1);
	q = malloc(sizeof(char*) * (int)(len_word + 1));
	ft_strncpy(q, str, start, end);
	return (q);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		arr_num;
	int		start_word;

	i = 0;
	arr_num = 0;
	// outer array holds number of words as it is only holding pointers
	res = ft_alloc_total_len(str);
	while (str[i] != '\0')
	{
		if (!ft_find_white(str[i]))
		{
			start_word = i;
			while (!ft_find_white(str[i]) && (str[i] != '\0'))
				i++;
			res[arr_num] = ft_putword(str, start_word, i);
			arr_num += 1;
			start_word = 0;
		}
		else
			i++;
	}
	res[arr_num != 0 ? arr_num : 0] = 0;
	return (res);
}
