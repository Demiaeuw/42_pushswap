/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:32:18 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/07 17:32:18 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	step00(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 1)
		return ;
	else if (size == 2)
		trie_deux(stack_a, stack_b);
	else if (size == 3)
		trie_trois(stack_a, stack_b);
	main_index(stack_a, stack_b);
	return ;
}

void	trie_deux(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a, stack_b);
	return ;
}

void	trie_trois(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*highest_node;

	highest_node = lf_big_node(*stack_a);
	if (*stack_a == highest_node)
		ra(stack_a, stack_b);
	else if ((*stack_a)->next == highest_node)
		rra(stack_a, stack_b);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a, stack_b);
}
