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
	t_stack *current;

	current = *stack_a;
	while (current != NULL)
	{
		current->cost = top_mouve_cost(stack_a);
		current = current->next;
	}
	current = *stack_b;
	while (current != NULL)
	{
		current->cost = top_mouve_cost(stack_b);
		current = current->next;
	}
}

int	top_mouve_cost(t_stack *stack)
{
	t_stack	*current;
	int median_index;
	int total_nodes;
	int cost;

	current = stack;
	median_index = lf_mediane_index(stack);
	total_nodes = ft_lstsize(stack);
	cost = 0;
	while (current != NULL)
	{
		if (current->index <= median_index)
			cost += current->index;
		else
			cost += total_nodes - current->index;
		current = current->next;
	}
	return (cost);
}