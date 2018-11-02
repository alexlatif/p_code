/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 01:39:47 by alatif            #+#    #+#             */
/*   Updated: 2018/11/01 01:40:09 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//YOU FUCKING MORON READ THE INSTRUCTIONS
//REPLACE ONLY WITH CHAR

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

char	*ft_replace(char *str, int start, int end, char *repl)
{
	int		i;

	i = 0;
	while (i < end)
		str[start++] = repl[i++];
	return (str);
}

char	*ft_find(char *str, char *find, char *repl)
{
	char	*res;
	int		i;
	int		j;
	int		i_start;

	i = 0;
	j = 0;
	res = str;
	while (str[i] != '\0')
	{
		if (str[i] == find[j])
		{
			i_start = i;
			while (str[i] == find[j])
			{
				i++;
				j++;
				continue ;
			}
			if (find[j] == '\0')
				res = ft_replace(str, i_start, j, repl);
			j = 0;
		}
		i++;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		ft_putstr(ft_find(argv[1], argv[2], argv[3]));
	ft_putchar('\n');
	return (0);
}


// 1 arg - string
// 2 arg - search
// 3 arg - replace

// args not 3 -> \n
// arg 2 not contained return origin 

// $>./search_and_replace "Papache est un sabre" "a" "o"
// Popoche est un sobre
// $>./search_and_replace "zaz" "art" "zul" | cat -e
// $
// $>./search_and_replace "zaz" "r" "u" | cat -e
// zaz$
// $>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
// $
// $>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
// ZaZ eT David aiME le METal.$
// $>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
// eNcOre Un ExEmPle Pas Facile a Ecrire $

// what if second or first arg is bigger
// find_str dictates the length 
// if repl_str is bigger than cut the replacement by the length of find_str
// if repl_str is less than find_str -> then what?


//LESSON LEARNED ONLY REPLACE 1 CHAR