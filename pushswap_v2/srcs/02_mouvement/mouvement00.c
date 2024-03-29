/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvement00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:48:07 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 23:37:52 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	push(t_stack **stack_from, t_stack **stack_to)
{

	t_stack	*to_add;
	t_stack	*new;
	
	if (ft_lstsize(*stack_from) == 0)
		return ;
	to_add = *stack_from;
	new = new_node(to_add->value);
	*stack_from = to_add->next;
	to_add->next = NULL;
	add_front(stack_to, new);
	free(to_add);
	return ;
}

void	swap(t_stack **stack)
{
	t_stack	*first;
	int	tmp;

	if (!(*stack) || !(*stack)->next)
		return ;
	first = *stack;
	tmp = first->value;
	first->value = first->next->value;
	first->next->value = tmp;
	return ;
}

void	rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*first;

	if (!(*stack) || !((*stack)->next))
		return ;
	last = ft_lstlast(*stack);
	first = (*stack)->next;
	last->next = *stack;
	(*stack)->next = NULL;
	*stack = first;
}

void	reverse_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*first;

	if (!(*stack) || !(ft_lstlast(*stack)) || ft_lstsize(*stack) == 1)
		return ;
	last = *stack;
	while (last->next->next)
		last = last->next;
	first = last->next;
	last->next = NULL;
	first->next = *stack;
	*stack = first;
	return ;
}
