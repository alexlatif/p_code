/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:22:30 by alatif            #+#    #+#             */
/*   Updated: 2018/10/30 19:27:12 by alatif           ###   ########.fr       */
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

	i = argc;
	while (i-- > 1)
	{
		lcl_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
