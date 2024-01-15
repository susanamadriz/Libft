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

void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
{
	size_t contar;

	size_t = 0;
	while (src[contar] && contar < n)
	{
		src[contar] = dst[contar];
		contar++;
	}
	return (dst);
}