/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvement03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:49:12 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 23:25:30 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ra(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_b;
	rotate(stack_a);
	ft_printf("ra\n");
	return ;
}

void	rb(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_a;
	rotate(stack_b);
	ft_printf("rb\n");
	return ;
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
	return ;
}
