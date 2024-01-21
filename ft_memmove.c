/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:09 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/01/16 14:46:14 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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