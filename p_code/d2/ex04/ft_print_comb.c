/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:02:16 by alatif            #+#    #+#             */
/*   Updated: 2018/10/24 21:20:45 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = '0' - 1;
	while (++x < '8')
	{
		y = x;
		while (++y < '9')
		{
			z = y;
			while (++z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
