/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:51:07 by alatif            #+#    #+#             */
/*   Updated: 2018/10/27 14:51:36 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_near_root(int nb, int n)
{
	int low_est;
	int res;

	if ((__INT32_MAX__ / n < n) || nb < n * n)
		return (ft_near_root(nb, (n / 2)));
	low_est = n;
	res = n;
	while (res < nb)
	{
		res = low_est * low_est;
		low_est++;
	}
	return (low_est - 1);
}

int		ft_is_prime(int nb)
{
	int i;
	int stop;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	stop = ft_near_root(nb, (nb / 2));
	while (i <= stop)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 0)
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
