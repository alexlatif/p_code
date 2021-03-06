/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:08:32 by alatif            #+#    #+#             */
/*   Updated: 2018/10/29 19:09:01 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += ('a' - 'A');
		if ((str[i - 1] < '0' && (str[i] >= 'a')) && (str[i] <= 'z'))
			str[i] -= ('a' - 'A');
		str[i] = str[i];
		i++;
	}
	return (str);
}
