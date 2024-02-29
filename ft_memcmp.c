/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:13:03 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/02/02 10:13:10 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((int)str1[i] != (int)str2[i])
		{
			return ((int)str1[i] - (int)str2[i]);
		}
		i++;
	}
	return (0);
}
// int main()
// {
// 	char *str1 = "abcdef";
// 	char *str2 = "abc\375xx";
// 	char result;

// 	result = ft_memcmp(str1, str2, 5);
// 	while (*str2)
// 		printf("%i\n", *str2++);
// 	if (result > 0)
// 		printf("str1 es mayor");
// 	else if (result < 0)
// 		printf("str1 es menor");
// 	else if (result == 0)
// 		printf("str1 es igual");
// 	return (0);
// }