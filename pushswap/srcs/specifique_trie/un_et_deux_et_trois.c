/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   un_et_deux_et_trois.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:27:18 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/27 08:50:47 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_list	*one_entry(t_list **stack)
{
	if ((*stack)->next == NULL)
		return (*stack);
	return (NULL);
}

void	two_entry(t_list **stack)
{
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
	return ;
}

static t_list	*lf_big_node(t_list *stack)
{
	int		highest;
	t_list	*highest_node;

	if (!stack)
		return (NULL);
	highest = INT_MIN;
	while (stack)
	{
		if ((stack)->value > highest)
		{
			highest = (stack)->value;
			highest_node = stack;
		}
		(stack) = (stack)->next;
	}
	return (highest_node);
}

void	three_entry(t_list **stack)
{
	t_list	*grande_node;

	grande_node = lf_big_node(*stack);
	if (*stack == grande_node)
		ra(stack);
	else if ((*stack)->next == grande_node)
		rra(stack);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}
