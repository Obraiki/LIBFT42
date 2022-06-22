/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:34:59 by obraiki           #+#    #+#             */
/*   Updated: 2021/11/14 19:36:15 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*p;
	size_t			ln;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s + start))
	{
		ln = ft_strlen(s + start);
		len = ln;
	}
	i = 0;
	p = (char *)malloc(sizeof (char) * len + 1);
	if (!p)
		return (NULL);
	while (i < len && start < ft_strlen(s))
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
