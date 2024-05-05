/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:49:39 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/05 17:07:09 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_data	data;

	init_data(&data);
	main_argument(ac, av, &data);
	main_trie(&data.stack_a, &data.stack_b);
	//
	print_list(&(*data.stack_a));
	liberer_data(&data);
}
