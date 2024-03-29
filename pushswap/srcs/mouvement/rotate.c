/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:03:17 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/18 21:03:17 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	first = *stack;
	last = ft_lstlast(first);
	*stack = first->next;
	first->next = NULL;
	last->next = first;
	return (0);
}

/**
 * ra (rotate a) : 
 * Décale d’une position vers le haut tous les élements de la pile a.
 * Le premier élément devient le dernier.
*/
int	ra(t_list **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

/**
 * rb (rotate b) : 
 * Décale d’une position vers le haut tous les élements de la pile b.
 * Le premier élément devient le dernie
*/
int	rb(t_list **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

/**
 * rr : ra et rb en même temps.
*/
int	rr(t_list **stack_a, t_list **stack_b)
{
	if (rotate(stack_a) == -1 || rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rr", 1);
	return (0);
}
