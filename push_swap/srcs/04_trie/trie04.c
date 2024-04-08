/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:32:55 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/07 17:32:55 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	step03(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*minus_node;
	int	med;

	minus_node = lf_low_node(*stack_b);
	med = ft_lstsize(*stack_b) / 2;
	if (minus_node->index > med)
		while (minus_node->next != NULL)
			rrb(stack_a, stack_b);
	else
		while (minus_node->next != NULL)
			rb(stack_a, stack_b);
	while (*stack_b != NULL)
		pa(stack_a, stack_b);
}