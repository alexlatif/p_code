/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechiang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 10:14:05 by jechiang          #+#    #+#             */
/*   Updated: 2018/10/28 13:03:22 by jechiang         ###   ########.fr       */
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
					|| (w == x && l == y && x != 1 && y != 1))
				ft_putchar('/');
			else if ((w == x && l == 1) || (w == 1 && l == y))
				ft_putchar('\\');
			else if (((w == x || w == 1) && (l > 1 && l < y))
					|| ((w > 1 || w < x) && (l == 1 || l == y)))
				ft_putchar('*');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		l++;
	}
}
