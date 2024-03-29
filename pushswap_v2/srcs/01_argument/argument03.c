/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:23:15 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 21:28:23 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 * Check si Doublon.
*/
int	check_duplicate(t_stack *stack, int value)
{
	t_stack	*temp;

	temp = stack;
	while (temp != NULL)
	{
		if (temp->value == value)
		{
			return (1);
		}
		temp = temp->next;
	}
	return (0);
}