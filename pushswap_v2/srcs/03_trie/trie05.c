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

void	trie_mouvement(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*main_node;
	t_stack	*target_node;
	int	main_mouve;
	int	target_mouve;

	//touver quoi bouger
	main_node = lf_lower_cost(*stack_b);
	target_node = find_target(main_node, main_node->cost);
	main_mouve = top_mouve_cost(*stack_b, main_node);
	target_mouve = top_mouve_cost(*stack_a, target_node);

	//bouger B et A(target) vers le haut
	while (main_mouve > 0 && target_mouve > 0)
	{
		if (main_mouve > 0 && target_mouve > 0)
		{
			rr(stack_a, stack_b);
			main_mouve--;
			target_mouve--;

		}
		else if (main_mouve > 0 && target_mouve == 0)
		{
			rb(stack_a, stack_b);
			main_mouve--;
		}
		else if (main_mouve == 0 && target_mouve > 0)
		{
			ra(stack_a, stack_b);
			target_mouve--;
		}
	}

	//push B
	pa(stack_a, stack_b);
	//reset index
	main_index(stack_a, stack_b);
}