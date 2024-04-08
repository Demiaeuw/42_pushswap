/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lf_target.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:54:39 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/08 20:54:39 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

t_stack	*lf_target(t_stack *stack, int target_value)
{
	t_stack	*temp;

	temp = stack;
	while (temp != NULL)
	{
		if (temp->value == target_value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
