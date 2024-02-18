/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:18:53 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/02/18 14:18:56 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
    int i;
    char *new;
    new = malloc(ft_strlen(s1) * sizeof(char) + 1);
    if (new == NULL)
     return (NULL);
    while (*s1)
        new[i++] = *s1++;
    new[i] = '\0';
    return (new);
}
int main()
{
	char cadena[] = "domingooo";
	char *str;

	printf ("%p\n", cadena);
	printf ("%s\n", cadena);

	str = ft_strdup(cadena);
	printf ("%p\n", cadena);
	printf ("%s\n", cadena);
	return (0);
	free (cadena);
}