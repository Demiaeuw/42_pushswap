/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:11:34 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/03 23:45:31 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	main_trie(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		step00(stack_a, stack_b);
	else
	{
		step01(stack_a, stack_b);
		step02(stack_a, stack_b);
		step03(stack_a, stack_b);
	}
}
