/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 00:58:47 by alatif            #+#    #+#             */
/*   Updated: 2018/11/02 01:00:48 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN(x)		x % 2 == 0
# define EVEN_MSG		"I have an even number of arguments.\n"
# define ODD_MSG		"I have an odd number of arguments.\n"
# define SUCCESS		0

typedef enum	e_bool
{
	FALSE,
	TRUE
}				t_bool;

#endif
