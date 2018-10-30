/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 11:13:17 by alatif            #+#    #+#             */
/*   Updated: 2018/10/29 11:14:38 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_num(char str)
{
	if ((str >= '0') && (str <= '9'))
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	while (*str != '\0')
	{
		if (ft_is_num(*str) == 1)
		{
			if (*(str - 1) == '-')
				sign = -1;
			if (ft_is_num(*(str + 1)) == 0)
				return (((res * 10) + (*str - '0')) * sign);
			res = ((res * 10) + (*str - '0'));
		}
		str++;
	}
	return (res * sign);
}
