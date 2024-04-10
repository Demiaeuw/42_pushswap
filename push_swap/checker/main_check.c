/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 03:14:25 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/10 03:14:25 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (ac <= 2)
		return (0);

	init_data(&data);
	main_argument(ac, av, &data);
	main_trie(&data.stack_a, &data.stack_b);
	checker_ps(&data.stack_a, &data.stack_b);
	checker_result(&data.stack_a, &data.stack_b);
	liberer_data(&data);
}
