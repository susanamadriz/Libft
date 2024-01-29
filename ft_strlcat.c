/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:56:23 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/01/29 10:56:27 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(dst);
	i = len;
	while (src[len - i] && len < dstsize - 1)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (len < dstsize)
		dst[len] = '\0';
	return (ft_strlen(src) + i);
}

int main(void)
{
  char const origen[] = "Como estas";
  char destino[20] = "Hola, ";
  size_t size;
  size_t result;

  size = 18;
  result = ft_strlcat(destino, origen, size);
  printf("Función original: %zu\n", result);
  printf("%s\n", destino);
  return (0);
}