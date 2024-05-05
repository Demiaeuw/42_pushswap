/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlfbig.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 02:41:16 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/05 16:56:37 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

t_stack	*lf_big_node(t_stack *stack)
{
	int		highest;
	t_stack	*highest_node;

	if (!stack)
		return (NULL);
	highest = INT_MIN;
	while (stack)
	{
		if ((stack)->value > highest)
		{
			highest = (stack)->value;
			highest_node = stack;
		}
		(stack) = (stack)->next;
	}
	return (highest_node);
}
