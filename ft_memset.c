/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:59:41 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/01/10 13:59:44 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			contar;

	s = b;
	contar = 0;
	while (s[contar] && contar < len)
	{
		s[contar] = (unsigned char)c;
		contar++;
	}
	return (b);
}
