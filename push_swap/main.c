/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:49:39 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/07 16:49:39 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_data	data;

	init_data(&data);
	main_argument(ac,av, &data);
	// //
	// ft_printf("\n----------------------\n");
	// ft_printf("\nStack A\n");
	// print_list(data.stack_a);
	// ft_printf("\nStack B\n");
	// print_list(data.stack_b);
	// ft_printf("\n----------------------\n");
	// //
	main_trie(&data.stack_a, &data.stack_b);
	// //
	// ft_printf("\n----------------------\n");
	// ft_printf("\nStack A\n");
	// print_list(data.stack_a);
	// ft_printf("\nStack B\n");
	// print_list(data.stack_b);
	// ft_printf("\n----------------------\n");
	// //
	liberer_data(&data);
}