/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 21:03:42 by alatif            #+#    #+#             */
/*   Updated: 2018/11/06 21:07:31 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// use ascii char value from 33 -> 126

int		str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i - 1);
}

void	ft_last_word(char *str)
{
	int		len;
	int		end;
	int		start;

	len = str_len(str);
	while (str[len] == ' ' || str[len] == '\t')
		len--;
	end = len;
	while (str[len] >= 33 && str[len] <= 126)
		len--;
	start = (len + 1);
	while (start <= end)
		write(1, &str[start++], 1);
}

int		main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		ft_last_word(str);
	}
	write(1, "\n", 1);
	return (0);
}
