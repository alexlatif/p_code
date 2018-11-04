/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 19:03:01 by alatif            #+#    #+#             */
/*   Updated: 2018/11/01 19:03:31 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		ft_putstr(tab[i++]);
}
