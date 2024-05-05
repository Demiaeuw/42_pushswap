/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlflow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 02:55:27 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/05 14:41:27 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

t_stack	*lf_low_node(t_stack *stack)
{
	int		lowest;
	t_stack	*lowest_node;

	if (!stack)
		return (NULL);
	lowest = INT_MAX;
	while (stack)
	{
		if ((stack)->value < lowest)
		{
			lowest = (stack)->value;
			lowest_node = stack;
		}
		(stack) = (stack)->next;
	}
	return (lowest_node);
}
