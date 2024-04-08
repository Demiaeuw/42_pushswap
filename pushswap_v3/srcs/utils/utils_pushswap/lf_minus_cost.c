/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lf_minus_cost.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:18:14 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/08 18:18:14 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

t_stack	*lf_minus_cost(t_stack **stack_a)
{
	t_stack	*current_node;
	t_stack	*min_cost_node;
	int	min_cost;

	current_node = *stack_a;
	min_cost_node = current_node;
	min_cost = current_node->cost;
	while (current_node != NULL)
	{
		if (current_node->cost < min_cost)
		{
			min_cost = current_node->cost;
			min_cost_node = current_node;
		}
		current_node = current_node->next;
	}
	return (min_cost_node);
}
