/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 01:25:42 by alatif            #+#    #+#             */
/*   Updated: 2018/11/02 01:28:31 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// only do what is asked
// function means function so dont write the main
// can use write

#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "123456789", 10);
}

