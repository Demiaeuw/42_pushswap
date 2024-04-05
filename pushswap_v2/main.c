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
	if (ft_lstsize(data.stack_a) < 4)
		entry_check(&data.stack_a, &data.stack_b);
	else if (ft_lstsize(data.stack_a) > 3)
		main_trie(&data.stack_a, &data.stack_b);
//
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);		
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
//
	liberer_data(&data);
	return (0);
}
