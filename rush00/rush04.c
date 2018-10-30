/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechiang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 11:17:23 by jechiang          #+#    #+#             */
/*   Updated: 2018/10/28 13:19:34 by jechiang         ###   ########.fr       */
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
			if ((w == 1 && l == 1)
					|| (w == x && l == y && y != 1 && x != 1))
				ft_putchar('A');
			else if ((w == x && l == 1) || (w == 1 && l == y))
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
