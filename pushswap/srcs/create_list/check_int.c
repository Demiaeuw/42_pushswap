/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:37:27 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/27 08:07:24 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 *  Check si chaque element du tableau de tableau est un chiffre.
 * et si le premier est un "-".
*/
int	check_is_numbr(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i][j] == '-')
			j++;
		while (str[i][j])
		{
			if (!(str[i][j] >= '0' && str[i][j] <= '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/**
 *  Check si chaque element du Tableau est bien un int ou non 
*/
int	check_int(char **tab)
{
	int			i;
	int long	nbr;

	i = 0;
	while (tab[i])
	{
		nbr = ft_atol(tab[i]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			return (0);
		i++;
	}
	return (1);
}

/**
 *  Check des deux.
*/
void	check_arg_int(char **str)
{
	if (check_is_numbr(str) == 0)
	{
		liberer_str_tab(str);
		errorint();
	}
	if (check_int(str) == 0)
	{
		liberer_str_tab(str);
		errorinttaille();
	}
}
