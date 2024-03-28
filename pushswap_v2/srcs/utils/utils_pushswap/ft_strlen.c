/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:40:50 by acabarba          #+#    #+#             */
/*   Updated: 2024/03/28 22:41:15 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

size_t	ft_strlen(const char *c)
{
	size_t	len;

	len = 0;
	while (c[len])
	{
		len++;
	}
	return (len);
}
