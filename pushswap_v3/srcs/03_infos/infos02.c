/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:47:37 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/07 16:47:37 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	main_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *current_node;
	int	cost_a;
	int	cost_b;

	current_node = *stack_a;
	while (current_node != NULL)
	{
		cost_a = cost_a_top(*stack_a, current_node);
		cost_b = cost_target_top(current_node, stack_b);

		if (cost_a >= 0)
		{
			if (cost_b >= 0)
				current_node->cost = get_max(cost_a, cost_b) +1;
			else
				current_node->cost = (cost_a + cost_b * -1) +1;
		}
		else if (cost_a < 0)
		{
			if (cost_b < 0)
				current_node->cost = get_max(cost_a * -1, cost_b * -1) +1;
			else
				current_node->cost = (cost_b + cost_a * -1) +1;
		}
		current_node = current_node->next;
	}
}

void	init_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current_a;
	t_stack	*current_b;

	current_a = *stack_a;
	current_b = *stack_b;
	while (current_a != NULL)
	{
		current_a->cost = 0;
		current_a = current_a->next;
	}
	while (current_b != NULL)
	{
		current_b->cost = 0;
		current_b = current_b->next;
	}
	return ;
	
}

int	cost_a_top(t_stack *stack, t_stack *node)
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
		return ((size - node->index) * -1);
	}
}

int	cost_target_top(t_stack *current, t_stack **stack_b)
{
	int size;
	int median;
	t_stack *target_node;

	size = ft_lstsize(*stack_b);
	median = size / 2;
	target_node = lf_target(*stack_b, current->target->value);
	if (target_node == NULL)
		return -1;
	if (target_node->index <= median)
	{
		return (target_node->index);
	}
	else
	{
		return ((size - target_node->index)* -1);
	}
}


