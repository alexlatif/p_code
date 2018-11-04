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

int		ft_is_num(char ch)
{
	if ((ch >= '0') && (ch <= '9'))
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f') ||
	(str[i] == '\n') || (str[i] == '\t') || (str[i] == ' '))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while (ft_is_num(str[i]) == 1)
	{
		res = ((res * 10) + (str[i] - '0'));
		i++;
	}
	return (res * sign);
}
