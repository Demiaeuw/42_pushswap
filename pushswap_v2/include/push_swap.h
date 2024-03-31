/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:52:26 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 23:46:29 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include "../srcs/utils/ft_printf/includes/ft_printf.h"

typedef struct	s_stack
{
	int	value;
	int	index;
	int	cost;
	struct s_stack	*target;
	struct s_stack	*next;
}	t_stack;

typedef struct	s_data
{
	t_stack	*stack_a;
	t_stack	*stack_b;
}	t_data;

int	main(int ac, char **av);

/*		00_error		*/
void	errordouble(void);
void	errorargument(void);
void	errorint(void);
void	errorinttaille(void);
void	error_is_sorted(t_data *data);
void	errorsorted(void);
void	liberer_liste(t_stack *stack);
void	liberer_str(char *str);
void	liberer_str_tab(char **str);
void	liberer_data(t_data *data);

/*		01_argument		*/
void	main_argument(int ac, char **av, t_data *data);
char	**clean_argument(int ac, char **av);
void	check_arg_int(char **str);
t_stack	*addint(t_stack *stack, int value, int index, char **dest);
int	size_argument(int ac, char **av);
char	*join_arguments(int ac, char **av);
int	check_is_numbr(char **str);
int	check_int(char **tab);
int	check_duplicate(t_stack *stack, int value);

/*		02_mouvement		*/
void	push(t_stack **stack_from, t_stack **stack_to);
void	swap(t_stack **stack);
void	rotate(t_stack **stack);
void	reverse_rotate(t_stack **stack);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **stack_a, t_stack **stack_b);
void	sb(t_stack **stack_a, t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a, t_stack **stack_b);
void	rb(t_stack **stack_a, t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a, t_stack **stack_b);
void	rrb(t_stack **stack_a, t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

/*		03_trie			*/
void	main_trie(t_stack **stack_a, t_stack **stack_b);
void	one_entry(t_stack **stack);
void	two_entry(t_stack **stack_a, t_stack **stack_b);
void	tree_entry(t_stack **stack_a, t_stack **stack_b);
void	entry_check(t_stack **stack_a, t_stack **stack_b);
void	pre_trie(t_stack **stack_a, t_stack **stack_b);
void	set_target(t_stack **stack_a, t_stack **stack_b);
void	set_targets_a(t_stack **stack_a, t_stack **stack_b);
void	set_targets_b(t_stack **stack_a, t_stack **stack_b);
void	main_index(t_stack **stack_a, t_stack **stack_b);
void	set_index(t_stack *stack);
void	main_cost(t_stack **stack_a, t_stack **stack_b);
int	top_mouve_cost(t_stack **stack);

/*		utils			*/
int	ft_atoi(const char *str);
long	ft_atol(const char *str);
void	add_front(t_stack **stack, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*lf_big_node(t_stack *stack);
t_stack	*lf_low_node(t_stack *stack);
int	lst_mediane_value(t_stack *stack);
t_stack	*lf_mediane_node(t_stack *stack);
int	lst_half_max_value(t_stack *stack);
int	lf_mediane_index(t_stack **stack);
int	ft_lstsize(t_stack *lst);
void	ft_putendl_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *c);
void	init_data(t_data *data);
int	is_sorted(t_stack *stack);
t_stack	*new_node(int value);
void	print_list(t_stack *stack);
void	print_noeud_list(t_stack *stack);

#endif