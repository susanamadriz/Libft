/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:04:09 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/02/18 15:04:12 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new;
	size_t i;

	i = 0;
	new = malloc ((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (i < len)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
/*
int main()
{
	char str[] = "Copia desde aquí";
	char *result;

	result = ft_substr(str, 7, 5);
	printf(":%s:", result);
	free (result);
	return (0);
}
*/
int	main()
{
	char str[] = "holamundo";
	printf("%s\n", ft_substr(str, 3, 7));
}
