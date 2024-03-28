/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_big_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:36:10 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/26 16:36:10 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 * Push tout dans stack_b sauf 3 et trie les 3.
 * Ajout de la target dans Stack_b.
*/
void	trie_step_01(t_data *data)
{
	while (ft_lstsize(data->stack_a) > 3)
		pb(&(data->stack_a), &(data->stack_b));
	three_entry(&(data->stack_a));
	reset_index(data->stack_a);
	reset_index(data->stack_b);
	target_to_node(&data);
}

// void	trie_step_02(t_data *data)
// {
	
// }
