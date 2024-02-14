/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:05:45 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/01/31 11:05:54 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	int len;

	len = ft_strlen(s);
	i = 0;
	while (len > i)
	{
		if (s[len - i++] == c)
		{
			return ((char *)&s[len - (i - 1)]);
		}
	}
	return (NULL);
}
int main() {
    const char *str = "hello world";
    char *result;
    char char_to_find = 'l';

    // Buscar la última aparición del carácter en la cadena
    result = ft_strrchr(str, char_to_find);

    // Verificar si el resultado es nulo
    if (result == NULL) {
        printf("El carácter '%c' no se encuentra en la cadena.\n", char_to_find);
    } else {
        printf("Última aparición de '%c' encontrada en: %s\n", char_to_find, result);
    }

    return 0;
}