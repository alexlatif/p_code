/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 22:59:07 by alatif            #+#    #+#             */
/*   Updated: 2018/11/05 22:59:10 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// spaces at the end of line

int		str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	check_print(char *s1, char *s2, int len1, int len2)
{
	int		i;
	int		j;
	int		found;

	i = 0;
	j = 0;
	while (i < len1)
	{
		found = 0;
		while (j < len2)
		{
			if (s1[i] == s2[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (found == 1)
			i++;
		else
			break ;
	}
	if (i == len1)
		write(1, s1, len1);
}

int		main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		s1_len;
	int		s2_len;

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		s1_len = str_len(s1);
		s2_len = str_len(s2);
		check_print(s1, s2, s1_len, s2_len);
	}
	write(1, "\n", 1);
	return (0);
}


// #include <unistd.h>

// void	wdmatch(char *s1, char *s2)
// {
// 	int len = 0;
// 	int i = 0;

// 	while (s1[len])
// 		++len;
// 	while (*s2 && i < len)
// 		(*s2++ == s1[i]) ? ++i : 0;
// 	if (i == len)
// 		write(1, s1, len);
// }

// int		main(int ac, char **av)
// {
// 	if (ac == 3)
// 		wdmatch(av[1], av[2]);
// 	write(1, "\n", 1);
// 	return (0);
// }