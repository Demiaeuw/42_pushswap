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
	// else if (size == 4)
	// 	trie_quatre(stack_a, stack_b);
	// else if (size == 5)
	// 	trie_cinq(stack_a, stack_b);
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
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a, stack_b);
	if ((*stack_a)->value > (*stack_a)->next->next->value)
	{
		ra(stack_a, stack_b);
	}
	if ((*stack_a)->next->value > (*stack_a)->next->next->value)
	{
		rra(stack_a, stack_b);
		sa(stack_a, stack_b);
		ra(stack_a, stack_b);
	}
	return ;
}