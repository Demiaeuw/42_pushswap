/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:24:47 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/27 08:52:00 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 * sa (swap a) : 
 * Intervertit les 2 premiers éléments au sommet de la pile a.
 * Ne fait rien s’il n’y en a qu’un ou aucun.
*/
int	sa(t_list **stack_a)
{
	t_list	*main;
	t_list	*next;

	if (ft_lstsize(*stack_a) < 2)
		return (-1);
	main = *stack_a;
	next = main->next;
	main->next = next->next;
	next->next = main;
	*stack_a = next;
	ft_putendl_fd("sa", 1);
	return (0);
}

/**
 * sb (swap b ) : 
 * Intervertit les 2 premiers éléments au sommet de la pile b.
 * Ne fait rien s’il n’y en a qu’un ou aucun
*/
int	sb(t_list **stack_b)
{
	t_list	*main;
	t_list	*next;

	if (ft_lstsize(*stack_b) < 2)
		return (-1);
	main = *stack_b;
	next = main->next;
	main->next = next->next;
	next->next = main;
	*stack_b = next;
	ft_putendl_fd("sb", 1);
	return (0);
}

/**
 * ss : sa et sb en même temps.
*/
int	ss(t_list **stack_a, t_list **stack_b)
{
	int	ret_a;
	int	ret_b;

	ret_a = sa(stack_a);
	ret_b = sb(stack_b);
	if (ret_a == -1 || ret_b == -1)
		return (-1);
	ft_putendl_fd("ss", 1);
	return (0);
}
