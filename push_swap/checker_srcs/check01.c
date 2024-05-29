/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 03:18:01 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/29 19:56:15 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	checker_ps(t_stack **stack_a, t_stack **stack_b)
{
	char	*ligne;

	ligne = get_next_line(0);
	while (ligne && ligne[0] != '\n')
	{
		if (!mouve00(ligne, stack_a, stack_b))
		{
			free(ligne);
			errorbase();
			return ;
		}
		if (is_sorted(*stack_a) && *stack_b == NULL)
		{
			free(ligne);
			return ;
		}
		free(ligne);
		ligne = get_next_line(0);
	}
	free(ligne);
}

void	checker_result(t_stack **stack_a, t_stack **stack_b)
{
	if (is_sorted(*stack_a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	if (*stack_a)
		liberer_liste(*stack_a);
	if (*stack_b)
		liberer_liste(*stack_b);
	return ;
}

int	mouve00(char *ligne, t_stack **stack_a, t_stack **stack_b)
{
	if (!(ft_strcmp(ligne, "sa\n")))
		swap(stack_a);
	else if (!(ft_strcmp(ligne, "sb\n")))
		swap(stack_b);
	else if (!(ft_strcmp(ligne, "ss\n")))
	{
		swap(stack_a);
		swap(stack_b);
	}
	else if (!(ft_strcmp(ligne, "ra\n")))
		rotate(stack_a);
	else if (!(ft_strcmp(ligne, "rb\n")))
		rotate(stack_b);
	else if (!(ft_strcmp(ligne, "rr\n")))
	{
		rotate(stack_a);
		rotate(stack_b);
	}
	else if (!(mouve01(ligne, stack_a, stack_b)))
		return (0);
	return (1);
}

int	mouve01(char *ligne, t_stack **stack_a, t_stack **stack_b)
{
	if (!(ft_strcmp(ligne, "pa\n")))
		push(stack_b, stack_a);
	else if (!(ft_strcmp(ligne, "pb\n")))
		push(stack_a, stack_b);
	else if (!(ft_strcmp(ligne, "rra\n")))
		reverse_rotate(stack_a);
	else if (!(ft_strcmp(ligne, "rrb\n")))
		reverse_rotate(stack_b);
	else if (!(ft_strcmp(ligne, "rrr\n")))
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
	}
	else
		return (0);
	return (1);
}
