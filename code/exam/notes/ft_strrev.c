/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 00:09:14 by alatif            #+#    #+#             */
/*   Updated: 2018/10/26 00:09:16 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	*ft_strrev(char *str)
{
	int		start;
	int		end;
	int		pop;

	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		pop = str[start];
		str[start] = str[end];
		str[end] = pop;
		start++;
		end--;
	}
	return (str);
}
