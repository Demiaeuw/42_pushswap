/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvement04.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:49:29 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 23:29:24 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rra(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_b;
	reverse_rotate(stack_a);
	ft_printf("rra\n");
	return ;
}

void	rrb(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_a;
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
	return ;
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
	return ;
}
