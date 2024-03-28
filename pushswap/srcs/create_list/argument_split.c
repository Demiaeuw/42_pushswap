/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:38:39 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/27 08:10:08 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 *  Join tous les arguments
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

/**
 * Split de tous les arguments
*/
char	**clean_argument(int ac, char **av)
{
	char	**dest;
	char	*src;

	src = join_arguments(ac, av);
	dest = ft_split(src, ' ');
	liberer_str(src);
	return (dest);
}
