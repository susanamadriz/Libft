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
// size_t	ft_strlen(const char *s);
/* size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
} */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(dst);
	i = len;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (len >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[len - i] && len < dstsize - 1)
	{
		dst[len] = src[len - i];
		len++;
	}
	dst[len] = '\0';
	return (ft_strlen(src) + i);
}
/* int main(void)
{
  char const origen[] = "lorem ipsum dolor sit amet";
  char destino[14] = "a";
  size_t size;
  size_t result;

  size = 15;
  result = ft_strlcat(destino, origen, size);
  printf("NUM: %zu\n", ft_strlcat("pqrstuvwxyz", "abcd", 20));
  printf("%s\n", destino);
  return (0);
}

int main(void)
{
 char dest[10] = "12345";
char dest2[10] = "12345";
char src[15] = "c99";
unsigned int len = 11;
printf("Empty dest Length: %u\n", len);
printf("Mine: %lu\n", ft_strlcat(dest, src, len));
printf("Hers: %lu\n", strlcat(dest2, src, len));
printf("Mine: %s\n", dest);
printf("Hers: %s\n", dest2);
return 0;
} */