/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:15:08 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 22:10:12 by acabarba         ###   ########.fr       */
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
	liberer_data(data);
	exit (0);
}