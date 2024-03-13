/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:34:15 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/01/29 12:48:25 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;	
	const unsigned char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/* int main()
{
	char str[] = "epale comom estás";
	char caracter = 'z';
	char *result;

	result = ft_memchr(str, caracter, strlen(str));

	if (result == NULL)
	printf ("no se encontró");
	else
	printf ("se encontro en: %s", result);
	return (0);
} */