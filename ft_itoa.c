/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:25:19 by obraiki           #+#    #+#             */
/*   Updated: 2021/11/14 14:20:27 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*d;
	int				len;
	long			nb;

	nb = n;
	len = ft_len(n);
	d = (char *)malloc((len + 1) * sizeof(char));
	if (!d)
		return (NULL);
	d[len--] = '\0';
	if (nb == 0)
		d[0] = '0';
	if (nb < 0)
	{
		d[0] = '-';
		nb = -1 * nb;
	}
	while (nb > 0)
	{
		d[len--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (d);
}
