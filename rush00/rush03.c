/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechiang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 11:13:39 by jechiang          #+#    #+#             */
/*   Updated: 2018/10/28 13:05:10 by jechiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	rush(int x, int y)
{
	int		w;
	int		l;

	l = 1;
	while (l <= y)
	{
		w = 1;
		while (w <= x)
		{
			if ((w == 1 && l == 1) || (w == 1 && l == y))
				ft_putchar('A');
			else if ((w == x && l == y) || (w == x && l == 1))
				ft_putchar('C');
			else if (((w == x || w == 1) && (l > 1 && l < y))
						|| ((w > 1 || w < x) && (l == 1 || l == y)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		l++;
	}
}
