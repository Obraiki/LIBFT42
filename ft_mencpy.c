/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mencpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:08:14 by obraiki           #+#    #+#             */
/*   Updated: 2021/11/02 19:30:59 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int	i;
	i = 0;
	if (dst == NULL && src == NULL)
		return( NULL);
		while (i < n)
		{
			*(char *)(dst + 1) = *(char *)(src + 1);
			i++;
		}
	return (dst);
}
int main()
{
	char t[] = "hello";
	char x[] = "world";
	/*printf("%s",memcpy(t, x, 5));*/
	puts(t);
	puts(x);
	memcpy(t, x, 5);
	puts(t);
	puts(x);
}
