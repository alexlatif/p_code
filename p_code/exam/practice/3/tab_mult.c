/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 22:21:55 by alatif            #+#    #+#             */
/*   Updated: 2018/11/05 22:21:57 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// CONVERT EVERY NEW FILE TO TAB
// RECHECK FUNCTION AND DECLARATION SPACING
// 238609293 * 19 - max test - HOW TO FIND MAX INT DURING EXAM
// convert int to string;
// num->str = nb + '0'
// str->num = nb - '0'
// second while loop atoi
// putnbr and atoi should take seconds

void	ft_putnbr(int nb)
{
	int		end;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		end = (nb + '0');
		write(1, &end, 1);
	}
}

int		ft_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		res;
	int		i;

	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
	|| str[i] == '\f' || str[i] == '\v')
		i++;
	while (ft_is_num(str[i]) == 1)
		res = (res * 10) + (str[i++] - '0');
	return (res);
}

void	ft_print_logic(int i, int mult, int res)
{
	ft_putnbr(i);
	write(1, " x ", 3);
	ft_putnbr(mult);
	write(1, " = ", 3);
	ft_putnbr(res);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		mult;
	int		res;

	i = 1;
	if (argc == 2)
	{
		while (i <= 9)
		{
			res = 0;
			mult = ft_atoi(argv[1]);
			res = (i * mult);
			ft_print_logic(i, mult, res);
			i++;
		}
	}
	return (0);
}
