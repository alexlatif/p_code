/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:09:38 by alatif            #+#    #+#             */
/*   Updated: 2018/10/30 19:13:39 by alatif           ###   ########.fr       */
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
	if (argc > 0)
	{
		lcl_putstr(argv[0]);
	}
	ft_putchar('\n');
	return (0);
}
