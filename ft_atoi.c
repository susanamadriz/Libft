/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:59:30 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/02/14 13:59:32 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	conversion;

	i = 0;
	sign = 1;
	conversion = 0;
	if (((int)nptr < -2147483648) || ((int)nptr > 2147483647)
		return (-1);
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((nptr[i] != '\0') && ((nptr[i] >= '0') && (nptr[i] <= '9')))
	{
		conversion = conversion * 10;
		conversion = conversion + nptr[i] - '0';
		i++;
	}
	return (conversion * sign);
}
int main()
{
	char hola[] = "12121212121212121212121212121212121212";
	int result;

	result = ft_atoi(hola);
	printf("%d", result);
	return (0);
}