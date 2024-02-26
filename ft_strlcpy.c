/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:53:27 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/01/23 13:35:08 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0 || src == 0)
	{
		return (ft_strlen(src));
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (ft_strlen(src));
}
// int main()
//  {
//  	char destino[]= "/n";
// 	char origen[]= "lorem";
//  	size_t size;
//  	size_t result;
// 	size_t miresult;

//  	size = 15;
//  	result = strlcpy(destino, origen, size);
//  	miresult = ft_strlcpy(destino, origen, size);
//  	printf("Función original: %zu\n", result);
//  	printf("Función mia: %zu\n", miresult);
//  }