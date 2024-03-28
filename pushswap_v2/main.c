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

	pb(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	pb(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	pb(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	pb(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	pb(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	pa(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	sa(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	sb(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	ss(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	ra(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	rb(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	rr(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	rra(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	rrb(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	rrr(&data.stack_a, &data.stack_b);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);


	liberer_data(&data);
	return (0);
}