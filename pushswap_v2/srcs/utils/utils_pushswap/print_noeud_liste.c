/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_noeud_liste.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:21:49 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 22:23:59 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	print_noeud_list(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	ft_printf("Value: %d, Index: %d\n", tmp->value, tmp->index);
}
