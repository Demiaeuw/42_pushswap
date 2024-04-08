/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:29:24 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 22:31:34 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int	nbnoeud;

	nbnoeud = 0;
	while (lst)
	{
		lst = lst->next;
		nbnoeud++;
	}
	return (nbnoeud);
}
