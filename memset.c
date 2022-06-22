/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obraiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:10:39 by obraiki           #+#    #+#             */
/*   Updated: 2021/11/02 18:07:51 by obraiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void	*ft_memset( void *b, int c, size_t len)
{
	size_t	i;
	i = 0;
	char	*sr;
	sr = b;
	while (i < len)
	{
		sr[i] = c;
		i++;
	}
return (sr);
}

int main()
{
	char c[] = "barbour farfor";
	ft_memset( c, '$', 7);
	puts(c);
}
