/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:46:12 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/20 19:46:12 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	count_word(char *str, char sep)
{
	unsigned int	i;
	unsigned int	nbr;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		if ((i == 0 || str[i - 1] == sep) && str[i] != sep)
			nbr++;
		i++;
	}
	return (nbr);
}

static char	**create_tab(char *str, char sep, char **dest)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		j = i;
		while (str[i] && str[i] != sep)
			i++;
		if (i > j)
		{
			dest[k] = malloc(sizeof(char) * (i - j + 1));
			if (!dest[k])
				return (NULL);
			ft_strlcpy(dest[k++], &str[j], i - j + 1);
		}
	}
	dest[k] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		nbword;

	nbword = count_word((char *)s, c);
	dest = (char **)malloc(sizeof(char *) * (nbword + 1));
	if (!dest)
		return (NULL);
	create_tab((char *)s, c, dest);
	return (dest);
}
