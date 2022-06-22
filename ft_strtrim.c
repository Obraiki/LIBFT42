/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:09:42 by obraiki           #+#    #+#             */
/*   Updated: 2021/11/14 14:20:57 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!s1)
		return (NULL);
	while (*s1 && (ft_strchr(set, *s1)))
		s1++;
	j = ft_strlen(s1);
	while (*s1 && (ft_strchr(set, s1[j])))
	{
		j--;
	}
	return (ft_substr(s1, 0, j + 1));
}
