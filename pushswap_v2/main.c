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
	argument(ac,av, &data);
	if (ft_lstsize(data.stack_a) < 4)
		entry_check(&data.stack_a, &data.stack_b);
	else if (ft_lstsize(data.stack_a) > 3)
	{
		int	med = lst_half_max_value(data.stack_a);
		ft_printf("\n%d\n\n", med);

		pre_trie(&data.stack_a, &data.stack_b);
		set_target(&data.stack_a, &data.stack_b);
		ft_printf("\nstack A\n\n");
		print_list(data.stack_a);
		ft_printf("\nstack B\n\n");
		print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// pb(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);
		
		// ft_printf("\n\n------------------------------------------\n");
		// pb(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);
		
		// ft_printf("\n\n------------------------------------------\n");
		// pb(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// pb(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// pb(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// pb(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// pa(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// sa(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// sb(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// ss(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// ra(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// rb(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// rr(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// rra(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// rrb(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

		// ft_printf("\n\n------------------------------------------\n");
		// rrr(&data.stack_a, &data.stack_b);
		// ft_printf("\nstack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);

	}
	liberer_data(&data);
	return (0);
}
