/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 00:19:45 by alatif            #+#    #+#             */
/*   Updated: 2018/10/26 00:20:52 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num(char x)
{
	return ((x >= '0') && (x <= '9'));
}

int		ft_atoi(char *str)
{
	int		res;
	int		sign;
	int		nbr_found;

	res = 0;
	sign = 1;
	nbr_found = 0;
	while (*str != '\0')
	{
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		if (!is_num(*str) && nbr_found == 1)
			return (res * sign);
		if (is_num(*str))
		{
			res = (res * 10) + (*str - '0');
			nbr_found = 1;
		}
		str++;
	}
	return (res * sign);
}
