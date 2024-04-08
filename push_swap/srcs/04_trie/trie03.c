/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:32:49 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/07 17:32:49 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// void	step02(t_stack **stack_a, t_stack **stack_b)
// {
// 	t_stack	*next_mouve;
// 	int	cost_a;
// 	int	cost_b;

// 	while (*stack_a != NULL)
// 	{
// 		// Ajout target et cost.
// 		main_reset_infos(stack_a, stack_b);
// 		// push dans B le cost le moins élevé en fonction de la target.
// 		next_mouve = lf_minus_cost(stack_a);
// 		cost_a = cost_a_top(*stack_a, next_mouve);
// 		cost_b = cost_target_top(next_mouve, stack_b);
// 		if (cost_a >= 0 && cost_b >= 0)
// 		{
// 			while (cost_a > 0 && cost_b > 0)
// 			{
// 				rr(stack_a, stack_b);
// 				cost_a--;
// 				cost_b--;
// 			}
// 			if (cost_a > 0)
// 			{
// 				while (cost_a > 0)
// 				{
// 					ra(stack_a, stack_b);
// 					cost_a--;
// 				}
// 			}
// 			else if (cost_b > 0)
// 			{
// 				while (cost_b > 0)
// 				{
// 					rb(stack_a, stack_b);
// 					cost_b--;
// 				}
// 			}
// 		}
// 		if (cost_a < 0 && cost_b < 0)
// 		{
// 			while (cost_a < 0 && cost_b < 0)
// 			{
// 				rrr(stack_a, stack_b);
// 				cost_a++;
// 				cost_b++;
// 			}
// 			if (cost_a < 0)
// 			{
// 				while (cost_a < 0)
// 				{
// 					rra(stack_a, stack_b);
// 					cost_a++;
// 				}
// 			}
// 			if (cost_b < 0)
// 			{
// 				while (cost_b < 0)
// 				{
// 					rrb(stack_a, stack_b);
// 					cost_b++;
// 				}
// 			}
// 		}
// 		if (cost_a >= 0 && cost_b < 0)
// 		{
// 			while (cost_a > 0)
// 			{
// 				ra(stack_a, stack_b);
// 				cost_a--;
// 			}
// 			while (cost_b < 0)
// 			{
// 				rrb(stack_a, stack_b);
// 				cost_b++;
// 			}
// 		}
// 		if (cost_a < 0 && cost_b >= 0)
// 		{
// 			while (cost_a < 0)
// 			{
// 				rra(stack_a, stack_b);
// 				cost_a++;
// 			}
// 			while (cost_b > 0)
// 			{
// 				rb(stack_a, stack_b);
// 				cost_b--;
// 			}
// 		}
// 		pb(stack_a, stack_b);
// 	}
// 	rb(stack_a, stack_b);
// 	main_reset_infos(stack_a, stack_b);
// }

void	step02(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*next_mouve;
	int		cost_a;
	int		cost_b;

	while (*stack_a != NULL)
	{
		main_reset_infos(stack_a, stack_b);
		next_mouve = lf_minus_cost(stack_a);
		cost_a = cost_a_top(*stack_a, next_mouve);
		cost_b = cost_target_top(next_mouve, stack_b);
		handle_costs(stack_a, stack_b, &cost_a, &cost_b);
		pb(stack_a, stack_b);
	}
	rb(stack_a, stack_b);
	main_reset_infos(stack_a, stack_b);
}

void	handle_costs(t_stack **sa, t_stack **sb, int *ca, int *cb)
{
	if (*ca >= 0 && *cb >= 0)
		handle_positive_costs(sa, sb, ca, cb);
	else if (*ca < 0 && *cb < 0)
		handle_negative_costs(sa, sb, ca, cb);
	else if (*ca >= 0 && *cb < 0)
	{
		handle_positive_costs(sa, sb, ca, cb);
		handle_negative_costs(sa, sb, ca, cb);
	}
	else if (*ca < 0 && *cb >= 0)
	{
		handle_negative_costs(sa, sb, ca, cb);
		handle_positive_costs(sa, sb, ca, cb);
	}
}

void	handle_positive_costs(t_stack **sa, t_stack **sb, int *ca, int *cb)
{
	while (*ca > 0 && *cb > 0)
	{
		rr(sa, sb);
		(*ca)--;
		(*cb)--;
	}
	if (*ca > 0)
	{
		while (*ca > 0)
		{
			ra(sa, sb);
			(*ca)--;
		}
	}
	else if (*cb > 0)
	{
		while (*cb > 0)
		{
			rb(sa, sb);
			(*cb)--;
		}
	}
}

void	handle_negative_costs(t_stack **sa, t_stack **sb, int *ca, int *cb)
{
	while (*ca < 0 && *cb < 0)
	{
		rrr(sa, sb);
		(*ca)++;
		(*cb)++;
	}
	if (*ca < 0)
	{
		while (*ca < 0)
		{
			rra(sa, sb);
			(*ca)++;
		}
	}
	if (*cb < 0)
	{
		while (*cb < 0)
		{
			rrb(sa, sb);
			(*cb)++;
		}
	}
}
