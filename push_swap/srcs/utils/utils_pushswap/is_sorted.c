/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:22:52 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/05 21:01:32 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

int	is_sorted(t_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	is_rev_sorted(t_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->value < stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	is_cinq_sorted(t_stack *stack)
{
	if (stack->value < stack->next->value && stack->next->value > stack->next->next->value
		&& stack->next->next->value > stack->next->next->next->value
		&& stack->next->next->next->value > stack->next->next->next->next->value)
		return (1);
	else
		return (0);
}