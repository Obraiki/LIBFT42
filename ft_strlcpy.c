/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:30:35 by obraiki           #+#    #+#             */
/*   Updated: 2021/11/07 19:08:40 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *s, const char *sr, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (sr[i])
	{
		i++;
	}
	if (len == 0)
		return (i);
	while (len - 1 > j && sr[j])
	{
		s[j] = sr[j];
		j++;
	}
	s[j] = '\0';
	return (i);
}
