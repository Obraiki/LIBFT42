/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:56:36 by obraiki           #+#    #+#             */
/*   Updated: 2021/11/14 15:25:36 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int			i;
	int			n;
	long int	p;

	i = 0;
	n = 0;
	p = 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\r'
		|| s[i] == '\f' || s[i] == '\v' || s[i] == '\n')
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			p = -1;
		i++;
	}
	while (s[i] <= '9' && s[i] >= '0')
	{
		n = n * 10;
		n = n + s[i] - '0';
		i++;
	}
	return (p * n);
}
