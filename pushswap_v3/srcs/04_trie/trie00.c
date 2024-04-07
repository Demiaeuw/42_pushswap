/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:11:34 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/07 17:11:34 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	main_trie(t_stack **stack_a, t_stack **stack_b)
{
	//check du nombre de valeur pour les tries specifiques
	// if (ft_lstsize(stack_a) <= 5)
	// {
	// 	// Trie specifique
		step00(stack_a, stack_b);
	// }
	// else
	// {
	// 	// Push 3 valeur dans B.
	// 	step01(stack_a, stack_b);
	// 	// Boucle de trie.
	// 	step02(stack_a, stack_b);
	// 	// Push de tout vers A.
	// 	step03(stack_a, stack_b);
	// 	// Verif si la liste est bien trier.
	// 	step04(stack_a, stack_b);
	// }
}