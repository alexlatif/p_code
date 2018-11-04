/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 03:14:16 by alatif            #+#    #+#             */
/*   Updated: 2018/10/27 03:14:23 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power > 30)
		return (-1);
	if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power < 0)
		return (0);
	else
		return (1);
}
