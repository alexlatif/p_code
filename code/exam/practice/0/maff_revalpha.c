/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 01:23:24 by alatif            #+#    #+#             */
/*   Updated: 2018/11/01 01:23:29 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char	low;
	char	up;
	int		i;

	low = 'z';
	up = 'Y';
	i = 0;
	while (i < 13)
	{
		ft_putchar(low);
		ft_putchar(up);
		low = (low - 2);
		up = (up - 2);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
