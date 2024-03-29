/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:33:33 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/27 08:06:01 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	liberer_liste(t_list *stack)
{
	t_list	*temp;

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
