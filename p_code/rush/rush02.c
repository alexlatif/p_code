/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:45:44 by wharring          #+#    #+#             */
/*   Updated: 2018/10/28 14:42:00 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

char	ft_char_set(int y, int max_y, int s_or_m)
{
	if (y == max_y)
	{
		if (s_or_m == 0)
			return ('A');
		return ('B');
	}
	if (y == 1)
	{
		if (s_or_m == 0)
			return ('C');
		return ('B');
	}
	if (s_or_m == 0)
		return ('B');
	return (' ');
}

void	ft_print_logic(int x, int y, int max_x, int max_y)
{
	char	side;
	char	mid;

	side = ft_char_set(y, max_y, 0);
	mid = ft_char_set(y, max_y, 1);
	if (x == 1)
	{
		ft_putchar(side);
		ft_putchar('\n');
	}
	else if (x == max_x)
		ft_putchar(side);
	else
		ft_putchar(mid);
	if (x > 1)
		ft_print_logic((x - 1), y, max_x, max_y);
	else if (y > 1)
		ft_print_logic(max_x, (y - 1), max_x, max_y);
}

void	rush(int x, int y)
{
	if ((x <= 0) || (y <= 0))
		ft_putchar('\n');
	else
		ft_print_logic(x, y, x, y);
}
