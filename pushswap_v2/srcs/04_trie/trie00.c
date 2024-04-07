/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 02:32:38 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/29 20:40:01 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	main_trie(t_stack **stack_a, t_stack **stack_b)
{
	pre_trie(stack_a, stack_b);
	tree_entry(stack_a, stack_b);
	set_target(stack_a, stack_b);
	main_index(stack_a, stack_b);
	main_cost(stack_a, stack_b);
	trie_core(stack_a, stack_b);
	sort_stack_a(stack_a, stack_b);
}

void	one_entry(t_stack **stack)
{
	if ((*stack)->next == NULL)
		return ;
}

void	two_entry(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a, stack_b);
	return ;
}

void	tree_entry(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*grande_node;

	grande_node = lf_big_node(*stack_a);
	if (*stack_a == grande_node)
		ra(stack_a, stack_b);
	else if ((*stack_a)->next == grande_node)
		rra(stack_a, stack_b);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a, stack_b);
}

void	entry_check(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) == 1)
		one_entry(stack_a);
	else if (ft_lstsize(*stack_a) == 2)
		two_entry(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) == 3)
		tree_entry(stack_a, stack_b);
}
