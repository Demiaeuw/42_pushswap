/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:24:29 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/27 16:27:20 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	main_argument_check(int ac, char **av, t_data *data)
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
		ft_printf("Erreur, Ajouter des valeurs pour le trie\n");
		exit(0);
	}
	if (ac == 2)
	{
		liberer_str_tab(dest);
		liberer_data(data);
		exit(0);
	}
	while (dest[++i])
		data->stack_a = addint(data->stack_a, ft_atoi(dest[i]), i, dest);
	liberer_str_tab(dest);
	if (is_sorted(data->stack_a))
		error_is_sorted_check(data);
}

void	error_is_sorted_check(t_data *data)
{
	ft_printf("OK\n");
	liberer_data(data);
	exit (0);
}
