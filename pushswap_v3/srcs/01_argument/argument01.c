/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:04:59 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 22:26:41 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 * Calcul de la taille des arguments.
*/
int	size_argument(int ac, char **av)
{
	int	i;
	int	j;
	int	compteur;
	int	stop;

	i = 1;
	j = 0;
	compteur = 0;
	stop = ac - 1;
	while (i <= stop)
	{
		while (av[i][j])
		{
			compteur++;
			j++;
		}
		j = 0;
		i++;
		compteur++;
	}
	return (compteur);
}

/**
 * Creer *str des arguments.
*/
char	*join_arguments(int ac, char **av)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 0;
	k = 0;
	dest = malloc(sizeof(char) * size_argument(ac, av) + 1);
	while (i <= ac -1)
	{
		while (av[i][j])
		{
			dest[k] = av[i][j];
			k++;
			j++;
		}
		j = 0;
		i++;
		dest[k] = ' ';
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
