/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step002.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:28:13 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/27 17:28:13 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 * Free les liste a la fin du programme.
*/
void	step_end(t_data *data)
{
	liberer_liste(data->stack_a);
	liberer_liste(data->stack_b);
	return ;
}