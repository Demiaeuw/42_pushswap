/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:15:30 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/18 21:15:30 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	reverse_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	first = *stack;
	last = ft_lstlast(first);
	while (first->next->next)
		first = first->next;
	first->next = NULL;
	last->next = *stack;
	*stack = last;
	return (0);
}

/**
 * rra (reverse rotate a) : 
 * Décale d’une position vers le bas tous les élements de la pile a.
 * Le dernier élément devient le premier.
*/
int	rra(t_list **stack_a)
{
	if (reverse_rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

/**
 * rrb (reverse rotate b) :
 * Décale d’une position vers le bas tous les élements de la pile b.
 * Le dernier élément devient le premier.
*/
int	rrb(t_list **stack_b)
{
	if (reverse_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

/**
 * rrr :
 * rra et rrb en même temps
*/
int	rrr(t_list **stack_a, t_list **stack_b)
{
	if (reverse_rotate(stack_a) == -1 || reverse_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrr", 1);
	return (0);
}
