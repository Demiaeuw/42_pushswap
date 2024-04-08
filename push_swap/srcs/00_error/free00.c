/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:17:55 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 22:10:12 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	liberer_liste(t_stack *stack)
{
	t_stack	*temp;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
	return ;
}

void	liberer_str(char *str)
{
	free(str);
	return ;
}

void	liberer_str_tab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		liberer_str(str[i]);
		i++;
	}
	free(str);
}

void	liberer_data(t_data *data)
{
	liberer_liste(data->stack_a);
	liberer_liste(data->stack_b);
	return ;
}
