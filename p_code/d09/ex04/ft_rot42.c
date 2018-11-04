/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 08:11:54 by alatif            #+#    #+#             */
/*   Updated: 2018/11/02 08:12:24 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rotate(char c, int up)
{
	char a;
	char z;
	
	a = (up == 1) ? 'A' : 'a';
	z = (up == 1) ? 'Z' : 'z';
	if (c >= a && c <= z)
	{
		if (c - 42 < a)
			return (z - (41 - (c - a)));
		else
			return (c - 42);
	}
	else
		return (c);
}

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("here %c", str[i]);
		str[i] = (str[i] >= 'A' && str[i] <= 'Z') ?
		rotate(str[i], 1) : rotate(str[i], 0);
		i++;
	}
	printf("str %s", str);
	return (str);
}
