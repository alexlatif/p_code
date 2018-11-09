/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 00:31:57 by alatif            #+#    #+#             */
/*   Updated: 2018/11/07 00:32:02 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// display without doubles chars in order of appearance
// keep j position of second arr
// write if found and not in string until i

int		str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i - 1);
}

int		is_used(char *str, int end)
{
	int		i;
	int		found;

	i = 0;
	found = 0;
	while (i < end)
	{
		if (str[i] == str[end])
			found = 1;
		i++;
	}
	return (found);
}

void	iter(char *s1, char *s2, int l1, int l2)
{
	int		i;
	int		j;
	int		used;
	int		found;

	i = 0;
	while (i <= l1)
	{
		used = is_used(s1, i);
		found = 0;
		j = 0;
		while (j <= l2)
		{
			if (used)
				break ;
			if (s1[i] == s2[j++] && used == 0)
			{
				found = 1;
				write(1, &s1[i], 1);
				break ;
			}
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		len1;
	int		len2;

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		len1 = str_len(s1);
		len2 = str_len(s2);
		iter(s1, s2, len1, len2);
	}
	write(1, "\n", 1);
	return (0);
}
