/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:24:01 by obraiki           #+#    #+#             */
/*   Updated: 2021/11/08 12:31:33 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ds;
	size_t	i;

	i = 0;
	ds = (char *)malloc(sizeof (char) * ft_strlen(s1) + 1);
	if (!ds)
		return (NULL);
	while (i <= ft_strlen(s1))
	{
		ds[i] = s1[i];
		i++;
	}
	return (ds);
}
