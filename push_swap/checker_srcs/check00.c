/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 03:14:25 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/29 20:00:44 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	main(int ac, char **av)
{
	t_data	data;

	init_data(&data);
	main_argument_check(ac, av, &data);
	checker_ps(&data.stack_a, &data.stack_b);
	checker_result(&data.stack_a, &data.stack_b);
}
