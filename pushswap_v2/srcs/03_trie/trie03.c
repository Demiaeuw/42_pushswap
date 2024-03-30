/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:18:31 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/30 14:18:31 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	main_index(t_stack **stack_a, t_stack **stack_b)
{
	set_index(*stack_a);
	set_index(*stack_b);
}

void	set_index(t_stack *stack)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stack;
	while (tmp != NULL)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}
