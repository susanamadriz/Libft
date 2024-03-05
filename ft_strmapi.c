/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:51:48 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/02/27 14:25:35 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;

	new = malloc((strlen(s) * sizeof(char)) + 1);
	if (new == NULL)
		return (NULL);
	new[strlen(s)] = '\0';
	i = 0;
	while (i < strlen(s))
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
