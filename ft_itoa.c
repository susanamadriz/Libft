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

char	*ft_itoa(int n)
{
	char		*new;
	size_t		counter;
	long int	n_long;

	n_long = (long int)n;
	counter = 0;
	if ((long int)n <= 0)
		counter++;
	while ((n_long != 0) && (counter++ >= 0))
		n_long = n_long / 10;
	new = ft_calloc(counter + 1, sizeof(char));
	if (new == NULL)
		return (NULL);
	n_long = (long int)n;
	if ((long int)n < 0)
		(n_long = (long int)n * -1);
	while (counter-- != 0)
	{
		new[counter] = n_long % 10 + '0';
		n_long = n_long / 10;
	}
	if ((long int)n < 0)
		new[0] = '-';
	return (new);
}
