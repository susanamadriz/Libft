/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Prueba2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:45:20 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/01/19 11:45:32 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = 0;
	d = dst;
	s = src;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *to = dst;
	const unsigned char *from = src;
	size_t count;

	count = len;
	if (to < from)
	{
		count = 0;
		while (count < len)
		{
			to[count] = from[count];
			count++;
		}
	}
	else (to > from);
	{
		while (count > 0)
		{
			count--;
			to[count] = from[count];
		}
	}
	return (dst);
}
int main()
{
  char origen[] = "123456789";
  char origen2[] = "123456789";
  char origen3[] = "123456789";
  char origen4[] = "123456789";
  char destino [] = "1234567890";
  char destino2 [] = "1234567890";
  char destino3 [] = "1234567890";
  char destino4 [] = "1234567890";
  size_t largo = 11;
  ft_memmove(destino, origen, largo);
  printf("mimemmove: %s\n", origen);
  memmove(destino2, origen2, largo);
  printf("  memmove: %s\n", origen2);
  ft_memcpy(destino3, origen3, largo);
  printf(" mimemcpy: %s\n", origen3);
  memcpy(destino4, origen4, largo);
  printf("   memcpy: %s\n", origen4);
  return (0);
}
