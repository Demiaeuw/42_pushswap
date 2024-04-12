/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:44:33 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/07 16:44:33 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	main_target(t_stack **stack_a, t_stack **stack_b)
{
	set_targets_a(stack_a, stack_b);
	set_targets_b(stack_a, stack_b);
}

void	set_targets_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;
	t_stack	*highest_node;
	int		highest;

	temp_a = *stack_a;
	while (temp_a)
	{
		highest = INT_MIN;
		highest_node = NULL;
		temp_b = *stack_b;
		find_highest_node_a(&temp_b, temp_a, &highest_node, &highest);
		if (highest_node == NULL)
		{
			temp_b = *stack_b;
			find_highest_node_null_a(&temp_b, &highest_node, &highest);
		}
		temp_a->target = highest_node;
		temp_a = temp_a->next;
	}
}

void	find_highest_node_a(t_stack **tb, t_stack *ta, t_stack **hn, int *h)
{
	while (*tb)
	{
		if ((*tb)->value > *h && ta->value > (*tb)->value)
		{
			*h = (*tb)->value;
			*hn = *tb;
		}
		*tb = (*tb)->next;
	}
}

void	find_highest_node_null_a(t_stack **tb, t_stack **hn, int *h)
{
	while (*tb)
	{
		if ((*tb)->value > *h)
		{
			*h = (*tb)->value;
			*hn = *tb;
		}
		*tb = (*tb)->next;
	}
}
