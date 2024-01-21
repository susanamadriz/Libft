/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:34:50 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/01/17 14:45:48 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *to = dst;
	const unsigned char *from = src;
	size_t count;

	count = 0;
	while (count < n)
	{
		to[count] = from[count];
		count++;
	}
	return (dst);
}
