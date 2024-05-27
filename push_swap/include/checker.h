/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 02:45:46 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/27 16:26:28 by acabarba         ###   ########.fr       */
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

int		main(int ac, char **av);
void	checker_ps(t_stack **stack_a, t_stack **stack_b);
void	checker_result(t_stack **stack_a, t_stack **stack_b);
int		mouve00(char *ligne, t_stack **stack_a, t_stack **stack_b);
int		mouve01(char *ligne, t_stack **stack_a, t_stack **stack_b);
void	main_argument_check(int ac, char **av, t_data *data);
void	error_is_sorted_check(t_data *data);

// // test
// // static char	*ft_a_next_line(int fd, char *str);
// // static char	*ft_the_real_line(char *str);
// // static char	*ft_newstr(char *str);
// char	*get_next_linet(int fd);
// int	ft_strlen_endl(char	*str);
// char	*ft_strjoin_gnl(char *s1, char *s2);
// void	*ft_memset(void *s, int c, size_t n);
// char	*ft_strrchr(const char *s, int c);
// char	*ft_strdup(char *src);

#endif