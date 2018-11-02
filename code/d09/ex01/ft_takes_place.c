/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 06:29:04 by alatif            #+#    #+#             */
/*   Updated: 2018/11/02 06:29:25 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_logic(int convert, char ap_from, char ap_to, int hour)
{
	int		from;
	int		to;

	from = (convert > 12 && convert < 24) ? (convert - 12) : convert;
	to = ((convert + 1) >= 12 && (convert + 1) <= 23) ?
	((convert + 1) - 12) : (convert + 1);
	if (to >= 1 && to <= 9)
		printf("0%d.00 %c.M. AND 0%d.00 %c.M.\n", from, ap_from, to, ap_to);
	else if (hour == 23)
		printf("23.00 %c.M. AND 00.00 %c.M.\n", ap_from, ap_to);
	else
		printf("%d.00 %c.M. AND %d.00 %c.M.\n", from, ap_from, to, ap_to);
}

void	ft_takes_place(int hour)
{
	int		convert;
	char	ap_from;
	char	ap_to;

	if (hour > 24)
		printf("PLEASE INSERT VALID 24 HOUR TIME\n");
	else
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		ap_from = (hour >= 12 && hour <= 23) ? 'P' : 'A';
		ap_to = ((hour + 1) >= 12 && (hour + 1) <= 23) ? 'P' : 'A';
		if (hour == 12 || hour == 24)
			convert = 0;
		else
			convert = hour;
		ft_print_logic(convert, ap_from, ap_to, hour);
	}
}
