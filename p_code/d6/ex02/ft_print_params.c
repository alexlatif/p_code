/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:18:56 by alatif            #+#    #+#             */
/*   Updated: 2018/10/30 19:19:14 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	lcl_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		lcl_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
