/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 11:28:20 by alatif            #+#    #+#             */
/*   Updated: 2018/10/29 11:28:32 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char *address;

	address = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	if (*dest != '\0')
	{
		*dest++ = '\0';
	}
	return (address);
}