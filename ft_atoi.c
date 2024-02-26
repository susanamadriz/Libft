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

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	conversion;

	i = 0;
	sign = 1;
	conversion = 0;
	if (((int)str < -2147483648) || ((int)str > 2147483647))
		return (-1);
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((str[i] != '\0') && ((str[i] >= '0') && (str[i] <= '9')))
	{
		conversion = conversion * 10;
		conversion = conversion + str[i] - '0';
		i++;
	}
	return (conversion * sign);
}
/* {
int main()
	char hola[] = "-211";
	int result;

	result = ft_atoi(hola);
	printf("%d", result);
	return (0);
} */