/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:39:12 by alatif            #+#    #+#             */
/*   Updated: 2018/10/24 18:55:58 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char i)
{
	write(1, &i, 1);
}

// n = 2
// void ft_print_combn()
// {
// 	int i;
// 	int j;

// 	i = '0';
// 	while(i <= '8')
// 	{
// 		j = i + 1;
// 		while(j <= '9')
// 		{
// 			ft_putchar(i);
// 			ft_putchar(j);
// 			ft_putchar(',');
// 			ft_putchar(' ');
// 			j++;
// 		}
// 		i++;
// 	}
// }

// n = 3
void ft_print_combn()
{
	int i;
	int j;
	int k;

	i = '0';
	while(i <= '7')
	{
		j = i + 1;
		while(j <= '8')
		{
			k = j + 1;
			while(k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				ft_putchar(',');
				ft_putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_combn();
	return(0);
}
