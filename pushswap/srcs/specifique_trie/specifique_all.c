/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifique_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:14:07 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/27 08:51:21 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	trie_check(int nbr_entry, t_data *data)
{
	if (nbr_entry == 1)
		one_entry(&(data->stack_a));
	else if (nbr_entry == 2)
		two_entry(&(data->stack_a));
	else if (nbr_entry == 3)
		three_entry(&(data->stack_a));
	return ;
}
