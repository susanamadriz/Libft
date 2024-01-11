/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <sjuan-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:37:38 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/01/10 14:52:34 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t contar;
	
	contar = 0;
	while (s[contar])
	{
		contar++;
	}
	return (contar);
}