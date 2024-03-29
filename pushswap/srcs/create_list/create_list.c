/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:33:54 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 21:30:58 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 * Check si Doublon.
*/
int	check_duplicate(t_list *stack, int value)
{
	t_list	*temp;

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

/**
 * Ajout d'un int spécifique a la suite de la liste.
 * Et check si Double.
*/
t_list	*addint(t_list *stack, int value, int index, char **dest)
{
	t_list	*new_element;
	t_list	*last;

	if (check_duplicate(stack, value))
	{
		errordouble();
		liberer_liste(stack);
		liberer_str_tab(dest);
		exit(0);
	}
	new_element = malloc(sizeof(t_list));
	new_element->value = value;
	new_element->index = index;
	new_element->next = NULL;
	if (stack == NULL)
		return (new_element);
	else
	{
		last = ft_lstlast(stack);
		last->next = new_element;
		return (stack);
	}
}

/**
 *  Affiche une liste
*/
void	print_list(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		ft_printf("Value: %d, Index: %d, Target : %d\n",
			tmp->value, tmp->index, tmp->target);
		tmp = tmp->next;
	}
}

/**
 * Affiche un noeud de liste
*/
void	print_noeud_list(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	ft_printf("Value: %d, Index: %d\n", tmp->value, tmp->index);
}

/**
 * Reinitialisation des index a chaque mouvement.
*/
void	reset_index(t_list *stack)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = stack;
	while (tmp != NULL)
	{
		tmp->index = i;
		i++;
		tmp = tmp->next;
	}
}
