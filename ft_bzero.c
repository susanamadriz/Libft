/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:08:42 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/01/14 15:08:58 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *z;
	size_t contar;

	z = s;
	contar = 0;
	while (z[contar] && contar < n)
	{
		z[contar] = 0;
		contar++;
	}
}
