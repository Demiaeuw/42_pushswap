/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:01:58 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/31 19:01:58 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	main_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *temp_a;
	t_stack *temp_b;

	temp_a = *stack_a;
	temp_b = *stack_b;
	while (temp_a != NULL)
	{
		temp_a->cost = (top_mouve_cost(*stack_a, temp_a) +
				target_mouve_cost(temp_a, *stack_b) + 1);
		temp_a = temp_a->next;
	}
	while (temp_b != NULL)
	{
		temp_b->cost = (top_mouve_cost(*stack_b, temp_b) +
			target_mouve_cost(temp_b, *stack_a) + 1);
		temp_b = temp_b->next;
	}
}


int	top_mouve_cost(t_stack *stack, t_stack *node)
{
	int size;
	int median;

	size = ft_lstsize(stack);
	median = size / 2;
	if (node->index <= median)
	{
		return (node->index);
	}
	else
	{
		return (size - node->index);
	}
}

int	target_mouve_cost(t_stack *stack_a, t_stack *stack_b)
{
	int size;
	int median;
	t_stack *target_node;

	size = ft_lstsize(stack_b);
	median = size / 2;
	target_node = find_target(stack_b, stack_a->target->value);
	if (target_node == NULL)
		return -1;
	if (target_node->index <= median)
	{
		return (target_node->index);
	}
	else
	{
		return (size - target_node->index);
	}
}
