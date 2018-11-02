/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 03:45:31 by alatif            #+#    #+#             */
/*   Updated: 2018/11/01 03:46:15 by alatif           ###   ########.fr       */
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
			if (str[i] >= 'A' && str[i] <= 'z')
			{
				if ((str[i] == 'z') || (str[i] == 'Z'))
					str[i] = (str[i] == 'z') ? 'a' : 'A';
				else
					str[i] = (str[i] + 1);
			}
			ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar('\n');
}
