/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 16:20:33 by alatif            #+#    #+#             */
/*   Updated: 2018/11/02 16:20:46 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_near(unsigned int n, unsigned int d)
{
	unsigned int i;

	if ((__INT_MAX__ / d < d) || n < d * d)
		return (ft_find_near(n, d / 2));
	i = d;
	while (i * i <= n)
	{
		if (i * i == n)
			return (1);
		i++;
	}
	return (0);
}

int		is_power_of_2(unsigned int n)
{
	return (ft_find_near(n, (n / 2)));
}
