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
		while (temp_b)
		{
			if (temp_b->value > highest && temp_a->value > temp_b->value)
			{
				highest = temp_b->value;
				highest_node = temp_b;
			}
			temp_b = temp_b->next;
		}
		if (highest_node == NULL)
		{
			temp_b = *stack_b;
			while (temp_b)
			{
				if (temp_b->value > highest)
				{
					highest = temp_b->value;
					highest_node = temp_b;
				}
				temp_b = temp_b->next;
			}
		}
		temp_a->target = highest_node;
		temp_a = temp_a->next;
	}
}

void	set_targets_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_b = *stack_b;
	while (temp_b)
	{
		int highest = INT_MIN;
		t_stack *highest_node = NULL;
		temp_a = *stack_a;
		while (temp_a)
		{
			if (temp_a->value > highest && temp_b->value > temp_a->value)
			{
				highest = temp_a->value;
				highest_node = temp_a;
			}
			temp_a = temp_a->next;
		}
		if (highest_node == NULL)
		{
			temp_a = *stack_a;
			while (temp_a)
			{
				if (temp_a->value > highest)
				{
					highest = temp_a->value;
					highest_node = temp_a;
				}
				temp_a = temp_a->next;
			}
		}
		temp_b->target = highest_node;
		temp_b = temp_b->next;
	}
}
