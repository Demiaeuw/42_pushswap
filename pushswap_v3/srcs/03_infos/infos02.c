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

	current_node = *stack_a;
	while (current_node != NULL)
	{
		current_node->cost = lf_cost(stack_a, stack_b);
		current_node = current_node->next;
	}
}


int	lf_cost(t_stack *stack, t_stack **opposite_stack)
{

}
