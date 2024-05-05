/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cinq_s_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:48:31 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/05 21:08:40 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void    cinq_s_t(t_stack **stack_a, t_stack **stack_b)
{
    rra(stack_a, stack_b);
    pb(stack_a, stack_b);
    sa(stack_a, stack_b);
    ra(stack_a, stack_b);
    ra(stack_a, stack_b);
    sa(stack_a, stack_b);
    pa(stack_a, stack_b);
}

void	cinq_s_t_deux(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a, stack_b);
	pb(stack_a, stack_b);
	ra(stack_a, stack_b);
	sa(stack_a, stack_b);
	rra(stack_a, stack_b);
	rra(stack_a, stack_b);
	pa(stack_a, stack_b);
}
