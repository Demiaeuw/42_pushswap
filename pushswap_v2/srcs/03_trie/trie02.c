/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:01:39 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/29 17:01:39 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	set_target(t_stack **stack_a, t_stack **stack_b)
{
	set_targets_a(stack_a, stack_b);
	set_targets_b(stack_a, stack_b);
}

void	set_targets_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = *stack_a;
	while (temp_a)
	{
		int highest = INT_MIN;
		t_stack *highest_node = NULL;
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

t_stack	*lf_target(t_stack *stack, int target_value)
{
	t_stack *temp = stack;

	while (temp != NULL)
	{
		if (temp->value == target_value)
			return temp;
		temp = temp->next;
	}
	return NULL;
}
