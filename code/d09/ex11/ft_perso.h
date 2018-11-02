/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 08:03:35 by alatif            #+#    #+#             */
/*   Updated: 2018/11/02 08:03:42 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD "Disc Jockey"

typedef struct	s_perso
{
	char	*name;	
	char	*profession;
	float	life;
	int		age;
}				t_perso;

#endif
