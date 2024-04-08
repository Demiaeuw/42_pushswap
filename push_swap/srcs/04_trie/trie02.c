/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:32:24 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/07 17:32:24 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	step01(t_stack **stack_a, t_stack **stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	main_index(stack_a, stack_b);
	init_cost(stack_a, stack_b);
}
