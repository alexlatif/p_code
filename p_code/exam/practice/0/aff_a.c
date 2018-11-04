/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 01:23:43 by alatif            #+#    #+#             */
/*   Updated: 2018/11/01 01:23:46 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char	*string;
	int		i;

	if (argc == 1)
	{
		ft_putchar('a');
	}
	else
	{
		i = 0;
		string = argv[1];
		while (string[i] != '\0')
		{
			if (string[i] == 'a')
			{
				ft_putchar('a');
				break ;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
