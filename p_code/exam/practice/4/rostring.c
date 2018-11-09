/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 04:38:36 by alatif            #+#    #+#             */
/*   Updated: 2018/11/01 04:39:27 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// find string length instead of \0
// check for tab \t

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*get_f_word(char *str, int start, int end)
{
	char	*res;
	int		len;
	int		i;

	i = 0;
	len = (end - start);
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (0);
	while (start < end)
		res[i++] = str[start++];
	res[i] = '\0';
	return (res);
}

int		ft_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_print_word(char *str, int start, int final_space)
{
	int		i;
	int		end_test;
	int		end;

	i = start;
	end = ft_len(str);
	if (final_space == 1)
		write(1, " ", 1);
	while (i < end)
	{
		while (str[i] == ' ')
			i++;
		while (str[i] != ' ' && i < end)
		{
			final_space = 1;
			write(1, &str[i++], 1);
		}
		end_test = i;
		while (str[end_test] == ' ')
			end_test++;
		if (str[end_test] != '\0')
			write(1, " ", 1);
		i++;
	}
	return (final_space);
}

int		main(int argc, char **argv)
{
	char	*str;
	char	*f_word;
	int		final_space;
	int		start;
	int		i;

	i = 0;
	final_space = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] == ' ')
			i++;
		start = i;
		while (str[i] != ' ')
			i++;
		f_word = get_f_word(str, start, i);
		final_space = ft_print_word(str, i, 0);
		if (f_word[0] != '\0')
			ft_print_word(f_word, 0, final_space);
	}
	write(1, "\n", 1);
	return (0);
}
