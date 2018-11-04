/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 03:21:29 by alatif            #+#    #+#             */
/*   Updated: 2018/11/02 03:25:51 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 'A' && str[i] <= 'z') || str[i] == 39)
				ft_putchar(str[i++]);
			else
			{
				ft_putchar(' ');
				ft_putchar(' ');
				ft_putchar(' ');
				i++;				
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
