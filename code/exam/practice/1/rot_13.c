/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 01:56:53 by alatif            #+#    #+#             */
/*   Updated: 2018/11/02 01:57:02 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	rot_13(char c, int up)
{
	char a;
	char z;
	
	a = (up == 1) ? 'A' : 'a';
	z = (up == 1) ? 'Z' : 'z';
	if (c >= a && c <= z)
	{
		if (c - 13 < a)
			return (z - (12 - (c - a)));
		else
			return (c - 13);
	}
	else
		return (c);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] != '\0')
		{
			str[i] = (str[i] >= 'A' && str[i] <= 'Z') ?
			rot_13(str[i], 1) : rot_13(str[i], 0);
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
