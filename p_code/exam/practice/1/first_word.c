/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 01:31:10 by alatif            #+#    #+#             */
/*   Updated: 2018/11/02 01:31:32 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// save files

#include <unistd.h>

int		main(int argc, char **argv)
{
	char	*str;
	int		i;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i] == '\0' || str[i] == ' ' || str[i] == '9')
			i++;
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '9')
			write(1, &str[i++], 1);
	}
	write(1, "\n", 1);
}
