/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:21:15 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/03 16:21:15 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	trie_core(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;
	t_stack	*target;

	while (*stack_b)
	{
		node = lf_lower_cost(*stack_b);
		target = lf_target(*stack_a, node->target->value);
		bring_to_top_a(stack_a, stack_b, target);
		bring_to_top_b(stack_a, stack_b, node);
		pa(stack_a, stack_b);
		sa(stack_a, stack_b);
		set_target(stack_a, stack_b);
		main_index(stack_a, stack_b);
	}
}

void	bring_to_top_a(t_stack **stack_a, t_stack **stack_b, t_stack *node)
{
	int size;
	int median;
	int i;

	size = ft_lstsize(*stack_a);
	median = size / 2;
	i = 0;
	if (node->index <= median)
	{
		while (i < node->index)
		{
			ra(stack_a, stack_b);
			i++;
		}
	}
	else
	{
		while (i < size - node->index)
		{
			rra(stack_a, stack_b);
			i++;
		}
	}
}

void	bring_to_top_b(t_stack **stack_a, t_stack **stack_b, t_stack *node)
{
	int size;
	int median;
	int i;

	size = ft_lstsize(*stack_b);
	median = size / 2;
	i = 0;
	if (node->index <= median)
	{
		while (i < node->index)
		{
			rb(stack_a, stack_b);
			i++;
		}
	}
	else
	{
		while (i < size - node->index)
		{
			rrb(stack_a, stack_b);
			i++;
		}
	}
}

void	trie_de_fin(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *lowest_node;

	lowest_node = lf_low_node(*stack_a);
	if ((*stack_a)->index < lowest_node->index)
		ra(stack_a, stack_b);
}

void	sort_stack_a(t_stack **stack_a, t_stack **stack_b)
{
	while (!is_sorted(*stack_a))
	{
		trie_de_fin(stack_a, stack_b);
	}
}
