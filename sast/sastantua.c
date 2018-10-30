/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 14:30:46 by alatif            #+#    #+#             */
/*   Updated: 2018/10/28 23:12:58 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NUM 1
#define STRING "hello"

void	ft_putchar(char ch);

void	ft_print_logic(int x, int low, int high)
{
	char side_l = '/';
	char side_r = '\\';
	char space = ' ';
	char star = '*';
	char new_line = '\n';
	int new_x = (x - 6);

	if (new_x == low)
		ft_putchar(side_r);
	else if (new_x == high)
		ft_putchar(side_l);
	else if (new_x > low && new_x < high)
		ft_putchar(star);
	else if (new_x == 1)
	{
		ft_putchar(space);
		ft_putchar(new_line);
	}
	else
		ft_putchar(space);
}

void	ft_recur_logic(int x, int y, int max_x, int max_y, int var)
{
	int low;
	int high;

	low = y;
	high = var; 
	ft_print_logic(x, low, high);

	if (x > 1)
		ft_recur_logic((x - 1), y, max_x, max_y, var);
	else if (y > 1)
		ft_recur_logic(max_x, (y - 1), max_x, max_y, (var + 1));
}

void	sastantua(int size)
{
	int height = 3;
	// int width_1 = 7;
	int width = 19;
	int var = height + 2;
	ft_recur_logic(width, height, width, height, var);
}

// 4 height_2 
// 19 width

// x changes with width in print logic