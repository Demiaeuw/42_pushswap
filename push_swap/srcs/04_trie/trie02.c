/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:32:24 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/19 18:32:15 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	trie_cinq(t_stack **stack_a, t_stack **stack_b)
{
		mouve_five_00(stack_a, stack_b);
		mouve_five_01(stack_a, stack_b);
		trie_trois(stack_a, stack_b);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
}

void	move_five_00(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*smallest_node;

	smallest_node = lf_low_node(*stack_a);
	while (*stack_a != smallest_node)
	{
		if (smallest_node->index < 3)
			ra(stack_a, stack_b);
		else
			rra(stack_a, stack_b);
	}
	pb(stack_a, stack_b);
}

void	move_five_01(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*smallest_node;

	smallest_node = lf_low_node(*stack_a);
	while (*stack_a != smallest_node)
	{
		if (smallest_node->index < 2)
			ra(stack_a, stack_b);
		else
			rra(stack_a, stack_b);
	}
	pb(stack_a, stack_b);
}
