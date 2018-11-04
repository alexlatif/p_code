/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 11:55:43 by alatif            #+#    #+#             */
/*   Updated: 2018/10/29 11:56:06 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*address;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			address = &str[i];
			while (str[i] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (address);
				i++;
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
