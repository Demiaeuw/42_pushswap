/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:20:27 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/27 08:52:35 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	push(t_list **stack_to, t_list **stack_from)
{
	t_list	*temp;
	t_list	*main_to;

	if (ft_lstsize(*stack_from) == 0)
		return (-1);
	main_to = *stack_to;
	temp = *stack_from;
	*stack_from = (*stack_from)->next;
	if (!main_to)
	{
		main_to = temp;
		main_to->next = NULL;
		*stack_to = main_to;
	}
	else
	{
		temp->next = main_to;
		*stack_to = temp;
	}
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
