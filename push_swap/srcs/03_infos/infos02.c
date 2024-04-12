/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:24:12 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/12 11:24:12 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	set_targets_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;
	t_stack	*highest_node;
	int		highest;

	temp_b = *stack_b;
	while (temp_b)
	{
		highest = INT_MIN;
		highest_node = NULL;
		temp_a = *stack_a;
		find_highest_node_b(&temp_a, temp_b, &highest_node, &highest);
		if (highest_node == NULL)
		{
			temp_a = *stack_a;
			find_highest_node_null_b(&temp_a, &highest_node, &highest);
		}
		temp_b->target = highest_node;
		temp_b = temp_b->next;
	}
}

void	find_highest_node_b(t_stack **ta, t_stack *tb, t_stack **hn, int *h)
{
	while (*ta)
	{
		if ((*ta)->value > *h && tb->value > (*ta)->value)
		{
			*h = (*ta)->value;
			*hn = *ta;
		}
		*ta = (*ta)->next;
	}
}

void	find_highest_node_null_b(t_stack **ta, t_stack **hn, int *h)
{
	while (*ta)
	{
		if ((*ta)->value > *h)
		{
			*h = (*ta)->value;
			*hn = *ta;
		}
		*ta = (*ta)->next;
	}
}
