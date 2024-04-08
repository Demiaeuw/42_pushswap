/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvement02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:48:54 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 23:21:11 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sa(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_b;
	swap(stack_a);
	ft_printf("sa\n");
	return ;
}

void	sb(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_a;
	swap(stack_b);
	ft_printf("sb\n");
	return ;
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
	return ;
}
