/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:41:26 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/07 16:41:26 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	main_index(t_stack **stack_a, t_stack **stack_b)
{
	set_index(*stack_a);
	set_index(*stack_b);
}

void	set_index(t_stack *stack)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stack;
	while (tmp != NULL)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}

void	main_reset_infos(t_stack **stack_a, t_stack **stack_b)
{
	main_index(stack_a, stack_b);
	main_target(stack_a, stack_b);
	main_cost(stack_a, stack_b);
}
