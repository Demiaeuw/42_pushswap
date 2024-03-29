/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:16:22 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 20:09:19 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include "../srcs/utils/ft_printf/includes/ft_printf.h"

typedef struct s_list
{
	int	value;
	int	index;
	int	target;
	struct s_list	*next;
}				t_list;

typedef struct s_data
{
	t_list	*stack_a;
	t_list	*stack_b;
}				t_data;

int		main(int ac, char **av);

/**
 * 								CREATE_LIST
**/
/*		argument_split		*/
int		size_argument(int ac, char **av);
char	*join_arguments(int ac, char **av);
char	**clean_argument(int ac, char **av);

/*		check_int		*/
int		check_is_numbr(char **str);
int		check_int(char **tab);
void	check_arg_int(char **str);

/*		create_list		*/
int		check_duplicate(t_list *stack, int value);
t_list	*addint(t_list *stack, int value, int index, char **dest);
void	print_list(t_list *stack);
void	print_noeud_list(t_list *stack);
void	reset_index(t_list *stack);

/*
 *								ERROR
 */
/*		error01			*/
void	errordouble(void);
void	errorargument(void);
void	errorint(void);
void	errorinttaille(void);
void	error_is_sorted(t_data *data);

/*		error02			*/
void	errorsorted(void);

/*		free			*/
void	liberer_liste(t_list *stack);
void	liberer_str(char *str);
void	liberer_str_tab(char **str);

/*
 *								MOUVEMENT
 */
/*		push			*/
int		push(t_list **stack_to, t_list **stack_from);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);

/*		reverse_rotate		*/
int		reverse_rotate(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

/*		rotate			*/
int		rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);

/*		swap			*/
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);

/*
 * 								SPECIFIQUE_TRIE
*/
/*		check_trie			*/
int		is_sorted(t_list *stack);

/*		specifique_all			*/
void	trie_check(int nbr_entry, t_data *data);

/*		un_et_deux_et_trois		*/
t_list	*one_entry(t_list **stack);
void	two_entry(t_list **stack);
void	three_entry(t_list **stack);

/*
 * 								STEP_BY_STEP
*/
/*		step001			*/
void	init_data(t_data *data);
void	step01(int ac, char **av, t_data *data);
void	step02(int ac, char **av, t_data *data);
void	step03(t_data *data);

/*		step002			*/
void	step_end(t_data *data);

/*
 * 								TRIE
*/
/*		target_mouve		*/


/*		target_trie		*/
int	target_minus_prox(t_list *stack, int stack_value);
t_list	*max_value(t_list *stack);
t_list	*minus_value(t_list *stack);
void	find_target(t_data *data);

/*		trie01			*/
void	trie_step_01(t_data *data);
// void	trie_step_02(t_data *data);

/*
 *								UTILS
*/
t_list	*new_node(int value);
void	add_front(t_list **stack, t_list *new);
int		ft_atoi(const char *str);
long	ft_atol(const char *str);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_putendl_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *c);

#endif