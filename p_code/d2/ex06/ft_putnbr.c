/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 22:14:19 by alatif            #+#    #+#             */
/*   Updated: 2018/10/24 22:26:03 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int n)
{
	int th;
	int np;

	th = 10;
	np = n;
	if (n < 0)
	{
		ft_putchar('-');
		np = -n;
	}
	if (np > 9)
	{
		while ((np / th) > 9)
		{
			th = th * 10;
		}
		ft_putchar((np / th) + '0');
		while ((th / 10) >= 10)
		{
			ft_putchar(((np % th) / (th / 10)) + '0');
			th = th / 10;
		}
	}
	ft_putchar((np % 10) + '0');
}
