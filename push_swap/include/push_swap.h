/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:52:26 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/19 18:32:22 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include "../srcs/utils/ft_printf/includes/ft_printf.h"

typedef struct s_stack
{
	struct s_stack	*target;
	struct s_stack	*next;
	int				value;
	int				index;
	int				cost;
}	t_stack;

typedef struct s_data
{
	t_stack	*stack_a;
	t_stack	*stack_b;
}	t_data;

int		main(int ac, char **av);

/*		00_error		*/
void	errordouble(void);
void	errorargument(void);
void	errorint(void);
void	errorinttaille(void);
void	error_is_sorted(t_data *data);
void	errorsorted(void);
void	errorbase(void);
void	liberer_liste(t_stack *stack);
void	liberer_str(char *str);
void	liberer_str_tab(char **str);
void	liberer_data(t_data *data);

/*		01_argument		*/
void	main_argument(int ac, char **av, t_data *data);
char	**clean_argument(int ac, char **av);
void	check_arg_int(char **str);
t_stack	*addint(t_stack *stack, int value, int index, char **dest);
int		size_argument(int ac, char **av);
char	*join_arguments(int ac, char **av);
int		check_is_numbr(char **str);
int		check_int(char **tab);
int		check_duplicate(t_stack *stack, int value);

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

/*		03_infos		*/
void	main_index(t_stack **stack_a, t_stack **stack_b);
void	set_index(t_stack *stack);
void	main_reset_infos(t_stack **stack_a, t_stack **stack_b);
void	main_target(t_stack **stack_a, t_stack **stack_b);
void	set_targets_a(t_stack **stack_a, t_stack **stack_b);
void	find_highest_node_a(t_stack **tb, t_stack *ta, t_stack **hn, int *h);
void	find_highest_node_null_a(t_stack **tb, t_stack **hn, int *h);
void	set_targets_b(t_stack **stack_a, t_stack **stack_b);
void	find_highest_node_b(t_stack **ta, t_stack *tb, t_stack **hn, int *h);
void	find_highest_node_null_b(t_stack **ta, t_stack **hn, int *h);
void	main_cost(t_stack **stack_a, t_stack **stack_b);
int		cost_setup(int cost_a, int cost_b);
void	init_cost(t_stack **stack_a, t_stack **stack_b);
int		cost_a_top(t_stack *stack, t_stack *node);
int		cost_target_top(t_stack *current, t_stack **stack_b);

/*		04_trie			*/
void	main_trie(t_stack **stack_a, t_stack **stack_b);
void	step00(t_stack **stack_a, t_stack **stack_b);
void	trie_deux(t_stack **stack_a, t_stack **stack_b);
void	trie_trois(t_stack **stack_a, t_stack **stack_b);
void	trie_quatre(t_stack **stack_a, t_stack **stack_b);
void	trie_cinq(t_stack **stack_a, t_stack **stack_b);
void	move_five_00(t_stack **stack_a, t_stack **stack_b);
void	move_five_01(t_stack **stack_a, t_stack **stack_b);
void	step01(t_stack **stack_a, t_stack **stack_b);
void	step02(t_stack **stack_a, t_stack **stack_b);
void	handle_costs(t_stack **sa, t_stack **sb, int *ca, int *cb);
void	handle_positive_costs(t_stack **sa, t_stack **sb, int *ca, int *cb);
void	handle_negative_costs(t_stack **sa, t_stack **sb, int *ca, int *cb);
void	step03(t_stack **stack_a, t_stack **stack_b);

/*		utils			*/
int		ft_atoi(const char *str);
long	ft_atol(const char *str);
void	add_front(t_stack **stack, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*lf_big_node(t_stack *stack);
t_stack	*lf_low_node(t_stack *stack);
int		lst_mediane_value(t_stack *stack);
t_stack	*lf_mediane_node(t_stack *stack);
int		lst_half_max_value(t_stack *stack);
int		lf_mediane_index(t_stack **stack);
int		ft_lstsize(t_stack *lst);
void	ft_putendl_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *c);
int		get_max(int a, int b);
void	init_data(t_data *data);
int		is_sorted(t_stack *stack);
int		is_rev_sorted(t_stack *stack);
int		is_cinq_sorted(t_stack *stack);
t_stack	*lf_minus_cost(t_stack **stack_a);
t_stack	*lf_target(t_stack *stack, int target_value);
t_stack	*new_node(int value);
void	print_list(t_stack *stack);
void	print_noeud_list(t_stack *stack);

#endif
