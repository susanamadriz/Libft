/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:04:05 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/02/26 14:04:52 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char *new;
	int i;
	int conversion;
	int sign;

	i = strlen(n);
	conversion = 0;

	new = calloc ()
		if (new = NULL)
	if (n[0] == '-')
		sign = -1;
	while (n[i] = '\0' && n[i] >= 0 && n[i] <= 9)
	{
		conversion = conversion % 10;
		conversion = conversion + n[i] + '0';
		i--;
	}
	return (conversion * sign);
}