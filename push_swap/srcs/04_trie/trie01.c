/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:32:18 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/05 16:36:28 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	step00(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 1)
	{
		liberer_liste(*stack_a);
		liberer_liste(*stack_b);
		exit(0);
	}
	else if (size == 2)
		trie_deux(stack_a, stack_b);
	else if (size == 3)
		trie_trois(stack_a, stack_b);
	else if (size == 4)
		trie_quatre(stack_a, stack_b);
	else if (size == 5)
		trie_cinq(stack_a, stack_b);
	main_index(stack_a, stack_b);
	return ;
}

void	trie_deux(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a, stack_b);
	return ;
}

void	trie_trois(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*highest_node;

	highest_node = lf_big_node(*stack_a);
	if (*stack_a == highest_node)
		ra(stack_a, stack_b);
	else if ((*stack_a)->next == highest_node)
		rra(stack_a, stack_b);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a, stack_b);
}

void	trie_quatre(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*smallest_node;

	smallest_node = lf_low_node(*stack_a);
	while (*stack_a != smallest_node)
		ra(stack_a, stack_b);
	pb(stack_a, stack_b);
	trie_trois(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	trie_cinq(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*smallest_node;
	int		stack_size;

	if (is_rev_sorted(*stack_a))
		cinq_s_t(stack_a, stack_b);
	else
	{
		stack_size = ft_lstsize(*stack_a);
		while (ft_lstsize(*stack_a) > 3)
		{
			smallest_node = lf_low_node(*stack_a);
			while (*stack_a != smallest_node)
				ra(stack_a, stack_b);
			pb(stack_a, stack_b);
		}
		trie_trois(stack_a, stack_b);
		if (stack_size == 5)
		{
			smallest_node = lf_low_node(*stack_b);
			if (*stack_b == smallest_node)
				sb(stack_a, stack_b);
			pa(stack_a, stack_b);
		}
		pa(stack_a, stack_b);
	}
}
