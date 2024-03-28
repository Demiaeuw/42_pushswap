/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_trie.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:22:35 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/27 17:22:35 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 * Fonction qui trouve la plus grand occurance en dessous de la source
 * Si pas trouvé : le plus grand
*/
t_list	*target_minus_prox(t_list *stack, int stack_value)
{
	t_list	*minus_prox;
	t_list	*current_node;

	minus_prox = NULL;
	current_node = stack;
	if (stack == NULL)
	{
		errorsorted();
		return (NULL);
	}
	while (current_node != NULL)
	{
		if ((minus_prox == NULL 
			|| current_node->value > minus_prox->value) &&
			current_node->value <= stack_value)
			minus_prox = current_node;
		current_node = current_node->next;
	}
	if (minus_prox != NULL)
		return (minus_prox);
	else
		return (max_value(stack));
}

/**
 * Fonction qui trouve la plus grande valeur dans la liste
*/
t_list	*max_value(t_list *stack)
{
	t_list	*max_node;
	t_list	*current_node;

	max_node = stack;
	current_node = stack->next;
	while (current_node != NULL)
	{
		if (current_node->value > max_node->value)
			max_node->value = current_node->value;
		current_node = current_node->next;
	}
	return (max_node);
}

/**
 * Fonction qui trouve la plus petite valeur dans la liste
*/
t_list	*minus_value(t_list *stack)
{
	t_list	*minus_node;
	t_list	*current_node;

	minus_node = stack;
	current_node = stack->next;
	while (current_node != NULL)
	{
		if (current_node->value < minus_node->value)
			minus_node->value = current_node->value;
		current_node = current_node->next;
	}
	return (minus_node);
}

/**
 * Ajout des targets a la premiere node dans la stack_b.
*/
void	target_to_node(t_data *data)
{
	t_list	*stack_b;
	t_list	*target_node;

	stack_b = data->stack_b;
	target_node = target_minus_prox(data->stack_a, stack_b->value);
	if (target_node != NULL) {
		stack_b->target = target_node->value;
	}
}
