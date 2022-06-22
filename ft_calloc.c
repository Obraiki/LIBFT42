/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:44:06 by obraiki           #+#    #+#             */
/*   Updated: 2021/11/13 16:26:44 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t s)
{
	char			*ds;
	unsigned int	t;
	unsigned int	i;

	t = c * s;
	ds = malloc(t);
	if (!ds)
		return (NULL);
	i = 0;
	while (t--)
	{
		ds[i] = 0;
		i++;
	}
	return ((void *)ds);
}
