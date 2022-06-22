/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:46:35 by obraiki           #+#    #+#             */
/*   Updated: 2021/11/14 14:28:45 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<stdlib.h>

static	size_t	ft_c_w(const char *s, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			j++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (j);
}

static	char	*ft_word_cpy(const char *s, char c)
{
	char	*w;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
	i++;
	w = (char *)malloc(sizeof(char) * (i + 1));
	if (!w)
		return (NULL);
	ft_strlcpy(w, s, i + 1);
	return (w);
}

static	char	**ft_libr(char **t, int i)
{
	while (i > 0)
		free(t[i--]);
	free (t);
	return (NULL);
}

static	char	**sp_code(char const *s, char c)
{
	char	**p;
	int		cw;
	int		i;

	i = 0;
	cw = ft_c_w(s, c);
	p = malloc((cw + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (i < cw)
	{
		while (s[0] == c)
			s++;
		p[i] = ft_word_cpy(s, c);
		if (!p)
		{
			return (ft_libr(p, i));
		}
		s = s + ft_strlen(p[i]);
		i++;
	}
	p[i] = 0;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (sp_code(s, c));
}
