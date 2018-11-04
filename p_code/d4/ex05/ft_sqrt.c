/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 04:24:59 by alatif            #+#    #+#             */
/*   Updated: 2018/10/27 04:25:21 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_nums(int nb, int n)
{
	int low_est;
	int res;

	if (((__INT32_MAX__ / n) < n) || nb < (n * n))
		return (ft_find_nums(nb, (n / 2)));
	low_est = n;
	res = n;
	while (res < nb)
	{
		res = low_est * low_est;
		low_est++;
	}
	if (((low_est - 1) * (low_est - 1)) == nb)
		return (low_est - 1);
	return (0);
}

int		ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (ft_find_nums(nb, (nb / 2)));
}
