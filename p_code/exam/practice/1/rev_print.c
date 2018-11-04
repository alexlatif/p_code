/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 03:08:22 by alatif            #+#    #+#             */
/*   Updated: 2018/11/01 03:09:15 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// take libraries out
// dont write putstr unless needed

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_disp_rev(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i = (i - 1);
	while (i >= 0)
	{
		ft_putchar(str[i--]);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_disp_rev(argv[1]);
	ft_putchar('\n');
	return (0);
}


// $> ./rev_print "zaz" | cat -e
// zaz$
// $> ./rev_print "dub0 a POIL" | cat -e
// LIOP a 0bud$
// $> ./rev_print | cat -e
// $