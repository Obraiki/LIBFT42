/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:34:33 by obraiki           #+#    #+#             */
/*   Updated: 2021/11/09 12:47:55 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		a;
	int		b;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	p = (char *)malloc((a + b + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, a + 1);
	ft_strlcat(&p[ft_strlen(p)], s2, b + 1);
	return (p);
}
