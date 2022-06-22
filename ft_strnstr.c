/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:08:37 by obraiki           #+#    #+#             */
/*   Updated: 2021/11/14 19:50:29 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!n[i] || h == n)
		return ((char *)h);
	while (i < len && h[i])
	{
		j = 0;
		while (n[j] && h[i + j] == n[j] && i + j < len)
		{
			if (n[j + 1] == '\0')
				return ((char *)h + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
