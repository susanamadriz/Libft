/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:50:22 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/02/21 11:54:41 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	len1;
	size_t	len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = ft_calloc ((len1 + len2 + 1), sizeof(char));
	if (new == NULL)
		return (NULL);
	while (i < (len1 + len2))
	{
		while (i < len1)
			new[i++] = *s1++;
		new[i++] = *s2++;
	}
	return (new);
}
/* int main()
{
	char str1[] = "empanada";
	char str2[] = " de queso";
	char *result;

	result = ft_strjoin(str1, str2);
	printf ("%s", result);
	return (0);
} */
