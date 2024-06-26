/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:15:08 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/27 16:21:25 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	errordouble(void)
{
	ft_putendl_fd("\n\033[31mERROR\033[0m\n\nDoublon\n", 2);
}

void	errorargument(void)
{
	ft_putendl_fd("\n\033[31mERROR\033[0m\n\nArgument\n", 2);
}

void	errorint(void)
{
	ft_putendl_fd("\n\033[31mERROR\033[0m\n\n"
		"Un des arguments n'est pas un int\n", 2);
	exit(0);
}

void	errorinttaille(void)
{
	ft_putendl_fd("\n\033[31mERROR\033[0m\n\nUn des arguments est supperieur"
		"a la taille maximal d'un int\n", 2);
	exit(0);
}

void	error_is_sorted(t_data *data)
{
	liberer_data(data);
	exit (0);
}
