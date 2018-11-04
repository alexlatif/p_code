/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:02:56 by alatif            #+#    #+#             */
/*   Updated: 2018/10/27 15:08:25 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	disp_putchar(char ch)
{
	write(1, &ch, 1);
}

void	disp_putnbr(int i)
{
	if (i < 0)
	{
		disp_putchar('-');
		disp_putnbr(-i);
	}
	if (i > 9)
	{
		disp_putnbr(i / 10);
		disp_putnbr(i % 10);
	}
	disp_putchar(i + '0');
}

void	disp_put_arr(int row[], int col[])
{
	int i;
	
	i = 0;
	while (i < 8)
	{
		disp_putnbr(row[i]);
		i++;
	}
	disp_putchar('\n');
	i = 0;
	while (i < 8)
	{
		disp_putnbr(col[i]);
		i++;
	}
}

void	ft_assign_start_arr(int row[], int col[])
{
	int i;
	
	i = 0;
	while (i < 8)
	{
		col[i] = i;
		i++;
	}
	i = 1;
	row[0] = 0;
	while (i < 8)
	{
		row[i] = -1;
		i++;
	}
}

int		ft_check_valid_row(int row_arr[], int col_arr[], int chk_indx)
{
	int i;
	
	i = 0;
	// check diagonals
	disp_putnbr(row_arr[chk_indx]);
	while (i < chk_indx)
	{
		if (row_arr[i] == row_arr[chk_indx])
			return 0;
		i++;
	}
	return (1);
}

void	ft_place_move(int row_arr[], int col_arr[], int chk_indx, int *res)
{
	int row_pos;

	row_pos = 0;
	while (row_pos < 8)
	{
		*row_arr = row_pos;
		if (ft_check_valid_row(row_arr, col_arr, chk_indx) == 1)
		{
			disp_putchar('Y');
			while (chk_indx < 8)
			{
				if (ft_check_valid_row(row_arr, col_arr, chk_indx) == 1)
					*res = (*res + 1);
				ft_place_move(row_arr, col_arr, (chk_indx + 1), res);
			}
		}
		row_pos++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	int row_pos[9];
	int col_pos[9];
	int r;
	int check_index_row;
	int *res;

	r = 0;
	check_index_row = 0;
	res = &r;
	// chk_indx = &check_index_row;
	// start
	// col_pos = [0, 1, 2, 3, 4, 5, 6, 7];
	// row_pos = [0, -1, -1, -1, -1, -1, -1, -1];
	// 1st loop
	// col_pos = [0, 1, 2, 3, 4, 5, 6, 7];
	// row_pos = [CHECK THIS];
	ft_assign_start_arr(row_pos, col_pos);
	ft_place_move(row_pos, col_pos, check_index_row, res);
	disp_put_arr(row_pos, col_pos);
	return (r);
}

int		main()
{
	ft_eight_queens_puzzle();
	return (0);
}
