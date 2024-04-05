/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:21:15 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/03 16:21:15 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// void	trie_mouvement(t_stack **stack_a, t_stack **stack_b)
// {
// 	t_stack	*main_node;
// 	t_stack	*target_node;
// 	int	main_mouve;
// 	int	target_mouve;

// 	if (!stack_a || !stack_b || !*stack_a || !*stack_b)
// 		return ;

// 	//touver quoi bouger
// 	main_node = lf_lower_cost(*stack_b);
// 	if (!main_node)
// 		return ;
// 	target_node = find_target(main_node, main_node->cost);
// 	if (!target_node)
// 		return ;

// 	main_mouve = top_mouve_cost(*stack_b, main_node);
// 	target_mouve = top_mouve_cost(*stack_a, target_node);

// 	//bouger B et A(target) vers le haut
// 	while (main_mouve > 0 && target_mouve > 0)
// 	{
// 		if (main_mouve > 0 && target_mouve > 0)
// 		{
// 			rr(stack_a, stack_b);
// 			main_mouve--;
// 			target_mouve--;

// 		}
// 		else if (main_mouve > 0 && target_mouve == 0)
// 		{
// 			rb(stack_a, stack_b);
// 			main_mouve--;
// 		}
// 		else if (main_mouve == 0 && target_mouve > 0)
// 		{
// 			ra(stack_a, stack_b);
// 			target_mouve--;
// 		}
// 	}

// 	//push B
// 	pa(stack_a, stack_b);
// 	//reset index
// 	main_index(stack_a, stack_b);
// }

void	trie_core(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;
	t_stack	*target;

	while (stack_b)
	{
		// chercher la node qui a le cost le plus bas dans stack_b et sa target.
		node = lf_lower_cost(*stack_b);
		target = lf_target(*stack_a, node->target->value);

		// faire en sorte que cette node dans stack_b et sa target qui est dans stack_a ce retrouve au sommet
		bring_to_top_a(stack_a, stack_b, target);
		bring_to_top_b(stack_a, stack_b, node);
		// push la node de stack_b vers stack_a.
		pa(stack_a, stack_b);

		// re assigner les index et les target.
		set_target(stack_a, stack_b);
		main_index(stack_a, stack_b);

		// TEST
		ft_printf("\nA\n\n");
		print_list(*stack_a);
		ft_printf("\nB\n\n");
		print_list(*stack_b);
		ft_printf("\n----------------------------\n");
		// Fin TEST

	}
}

void	bring_to_top_a(t_stack **stack_a, t_stack **stack_b, t_stack *node)
{
	// (void)stack_b;
	int size;
	int median;
	int i;

	size = ft_lstsize(*stack_a);
	median = size / 2;
	i = 0;
	if (node->index <= median)
	{
		while (i < node->index)
		{
			ra(stack_a, stack_b);
			i++;
		}
	}
	else
	{
		while (i < size - node->index)
		{
			rra(stack_a, stack_b);
			i++;
		}
	}
}

void	bring_to_top_b(t_stack **stack_a, t_stack **stack_b, t_stack *node)
{
	// (void)stack_a;
	int size;
	int median;
	int i;

	size = ft_lstsize(*stack_b);
	median = size / 2;
	i = 0;
	if (node->index <= median)
	{
		while (i < node->index)
		{
			rb(stack_a, stack_b);
			i++;
		}
	}
	else
	{
		while (i < size - node->index)
		{
			rrb(stack_a, stack_b);
			i++;
		}
	}
}
