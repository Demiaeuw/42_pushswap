/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:20:27 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 19:35:24 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	push(t_list **stack_to, t_list **stack_from)
{

	t_list	*to_add;
	t_list	*new;
	
	if (ft_lstsize(*stack_from) == 0)
		return (-1);

	to_add = *stack_from;
	new = new_node(to_add->value);
	*stack_from = to_add->next;
	to_add->next = NULL;
	add_front(stack_to, new);
	free(to_add);
	return (0);
}

/**
 * pa (push a) : 
 * Prend le premier élément au sommet de b et le met sur a.
 * Ne fait rien si b est vide
*/
int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

/**
 * pb (push b) : 
 * Prend le premier élément au sommet de a et le met sur b.
 * Ne fait rien si a est vide
*/
int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
