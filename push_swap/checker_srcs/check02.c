/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:24:29 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/29 20:00:57 by acabarba         ###   ########.fr       */
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
		ft_printf("\n\033[31mError\033[0m\n\n"
			"Ajouter des valeurs pour le tri\n\n");
		exit(0);
	}
	while (dest[++i])
		data->stack_a = addint(data->stack_a, ft_atoi(dest[i]), i, dest);
	liberer_str_tab(dest);
	if (is_sorted(data->stack_a))
		error_is_sorted(data);
}
