/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:01:42 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/27 18:44:37 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	main_argument(int ac, char **av, t_data *data)
{
	char	**dest;
	int		i;

	i = -1;
	dest = clean_argument(ac, av);
	check_arg_int(dest);
	if (ac == 1)
	{
		liberer_str_tab(dest);
		liberer_data(data);
		ft_printf("\n\033[31mError\033[0m\n\n"
			"Ajouter des valeurs pour le trie\n\n");
		exit(0);
	}
	while (dest[++i])
		data->stack_a = addint(data->stack_a, ft_atoi(dest[i]), i, dest);
	liberer_str_tab(dest);
	if (is_sorted(data->stack_a))
		error_is_sorted(data);
}

/**
 * Split de tous les arguments dans une **str.
 * argument01
*/
char	**clean_argument(int ac, char **av)
{
	char	**dest;
	char	*src;

	src = join_arguments(ac, av);
	dest = ft_split(src, ' ');
	liberer_str(src);
	return (dest);
}

/**
 * Check si ceux sont bien des 'int'.
 * argument02
*/
void	check_arg_int(char **str)
{
	if (check_is_numbr(str) == 0)
	{
		liberer_str_tab(str);
		errorint();
	}
	if (check_int(str) == 0)
	{
		liberer_str_tab(str);
		errorinttaille();
	}
}

/**
 * Ajout d'un int spécifique a la suite de la liste.
 * Et check si Double.
 * argument03
*/
t_stack	*addint(t_stack *stack, int value, int index, char **dest)
{
	t_stack	*new_element;
	t_stack	*last;

	if (check_duplicate(stack, value))
	{
		errordouble();
		liberer_liste(stack);
		liberer_str_tab(dest);
		exit(0);
	}
	new_element = malloc(sizeof(t_stack));
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
