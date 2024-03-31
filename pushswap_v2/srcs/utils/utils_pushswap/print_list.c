/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:21:24 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 22:23:59 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void print_list(t_stack *stack)
{
	while (stack)
	{
		printf("Value: %d, Index: %d, Target : %d, Cost : %d\n",
			stack->value, stack->index,
			stack->target ? stack->target->value : -1,
			stack->cost);
		stack = stack->next;
	}
}

