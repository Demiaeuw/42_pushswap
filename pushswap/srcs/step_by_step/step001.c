/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step001.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:52:09 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/27 08:16:29 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	init_data(t_data *data)
{
	data->stack_a = NULL;
	data->stack_b = NULL;
}

/**
 * Création de la liste, creation du tableau de tableau. 
 * Ajout des element du tableau de tableau dans la liste avec tout les test.
 * verifie si c'est deja trié ou non.
*/
void	step01(int ac, char **av, t_data *data)
{
	char	**dest;
	int		i;

	i = 0;
	dest = clean_argument(ac, av);
	check_arg_int(dest);
	while (dest[i])
	{
		data->stack_a = addint(data->stack_a, ft_atoi(dest[i]), i, dest);
		i++;
	}
	liberer_str_tab(dest);
	if (is_sorted(data->stack_a))
		error_is_sorted(data);
}

/**
 * Check du nombre d'argument pour gerer les cas spécifiques.
 * Et gere les cas spécifique.
*/
void	step02(int ac, char **av, t_data *data)
{
	(void)av;
	if (ac <= 5)
	{
		trie_check(ac -1, data);
		return ;
	}
	else
		return ;
}

/**
 * Si pas spécifiques : debut de l'algo de trie
*/
void	step03(t_data *data)
{
	trie_step_01(data);
}

