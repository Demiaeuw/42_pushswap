/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:54:07 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/27 08:04:23 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	errordouble(void)
{
	ft_putendl_fd("Erreur Doublon", 2);
}

void	errorargument(void)
{
	ft_putendl_fd("Erreur Argument", 2);
}

void	errorint(void)
{
	ft_putendl_fd("Erreur dans les arguments (int)", 2);
	exit(0);
}

void	errorinttaille(void)
{
	ft_putendl_fd("Erreur, Taille d'int", 2);
	exit(0);
}

void	error_is_sorted(t_data *data)
{
	ft_putendl_fd("La liste est deja triee", 2);
	step_end(data);
	exit (0);
}
