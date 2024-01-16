/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:34:50 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/01/15 11:39:50 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *para_aca = dst;
	const unsigned char *de_aca = src;
	size_t contar;

	contar = 0;
	while (contar < n)
	{
		para_aca[contar] = de_aca[contar];
		contar++;
	}
	return (dst);
}
int main(void)
{
	unsigned char *destino;
	const char *origen = "Hola, Mundo!";

	ft_memcpy(destino, origen, 2);
	printf("Debería decir: %s", destino);
	return (0);
}