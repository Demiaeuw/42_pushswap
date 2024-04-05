/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:00:02 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 23:45:36 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_data	data;

	init_data(&data);
	main_argument(ac,av, &data);
	// test

	ft_printf("\n");
	ft_printf("||----------------------------------------------------------||");
	ft_printf("\n");
	ft_printf("			LISTE RECUS		");
	ft_printf("\n");
	ft_printf("||----------------------------------------------------------||");
	ft_printf("\n");

	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);		
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);

	// fin test

	if (ft_lstsize(data.stack_a) < 4)
		entry_check(&data.stack_a, &data.stack_b);
	else if (ft_lstsize(data.stack_a) > 3)
	{
		// TEST

		ft_printf("\n");
		ft_printf("||----------------------------------------------------------||");
		ft_printf("\n");
		ft_printf("			OPERATION PRE-TRIE		");
		ft_printf("\n");
		ft_printf("||----------------------------------------------------------||");
		ft_printf("\n");

		// Fin TEST
		main_trie(&data.stack_a, &data.stack_b);
		main_index(&data.stack_a, &data.stack_b);
		main_cost(&data.stack_a, &data.stack_b);
		
		// TEST

		ft_printf("\n");
		ft_printf("||----------------------------------------------------------||");
		ft_printf("\n");
		ft_printf("			AFFICHAGE APRES PRE-TRIE		");
		ft_printf("\n");
		ft_printf("||----------------------------------------------------------||");
		ft_printf("\n");
		ft_printf("\nstack A\n\n");
		print_list(data.stack_a);
		ft_printf("\nstack B\n\n");
		print_list(data.stack_b);

		// Fin TEST

		// TEST

		ft_printf("\n");
		ft_printf("||----------------------------------------------------------||");
		ft_printf("\n");
		ft_printf("			DEBUT DE TRIE		");
		ft_printf("\n");
		ft_printf("||----------------------------------------------------------||");
		ft_printf("\n");

		// Fin TEST

		trie_core(&data.stack_a, &data.stack_b);


	}
	liberer_data(&data);
	return (0);
}
