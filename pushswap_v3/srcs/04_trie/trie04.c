/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:32:55 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/07 17:32:55 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	step03(t_stack **stack_a, t_stack **stack_b)
{
	while (*stack_b != NULL)
		pa(stack_a, stack_b);
}