/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 02:45:46 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/10 02:45:46 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include "../srcs/utils/ft_printf/includes/ft_printf.h"
# include "push_swap.h"
# include "get_next_line.h"

int	main(int ac, char **av);
void	checker_ps(t_stack **stack_a, t_stack **stack_b);
void	checker_result(t_stack **stack_a, t_stack **stack_b);
int	mouve00(char *ligne, t_stack **stack_a, t_stack **stack_b);
int	mouve01(char *ligne, t_stack **stack_a, t_stack **stack_b);

#endif