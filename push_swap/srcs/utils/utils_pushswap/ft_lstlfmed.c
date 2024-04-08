/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlfmed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 03:44:51 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/29 03:44:51 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

int	lst_mediane_value(t_stack *stack)
{
	int	temp;

	temp = lf_mediane_node(stack)->value;
	return ((temp + 1) /2);
}

t_stack	*lf_mediane_node(t_stack *stack)
{
	t_stack *slow_ptr = stack;
	t_stack *fast_ptr = stack;

	if (stack != NULL)
	{
		while (fast_ptr != NULL && fast_ptr->next != NULL)
		{
			fast_ptr = fast_ptr->next->next;
			slow_ptr = slow_ptr->next;
		}
	}

	return (slow_ptr);
}

int	lst_half_max_value(t_stack *stack)
{
	int	max_value;

	max_value = lf_big_node(stack)->value;
	return max_value / 2;
}

int	lf_mediane_index(t_stack **stack)
{
	int total_nodes;
	int median_index;

	total_nodes = ft_lstsize(*stack);
	median_index = total_nodes / 2;

	return (median_index);
}
