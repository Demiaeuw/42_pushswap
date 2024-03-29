/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 03:41:56 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/29 16:58:55 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	pre_trie(t_stack **stack_a, t_stack **stack_b)
{
	int	med;

	pb(stack_a, stack_b);
	med = lst_half_max_value(*stack_b);
	while (ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->value <= med)
			pb(stack_a, stack_b);
		else if ((*stack_a)->value > med)
		{
			pb(stack_a, stack_b);
			rb(stack_a, stack_b);
		}
	}
	return ;
}
