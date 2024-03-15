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

/* char	prueba(unsigned int i, char s)
{
	char new;
	new = ft_toupper(s);
	return(new);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;

	if (s == NULL || f == NULL)
		return (NULL);
	new = malloc((ft_strlen(s) * sizeof(char)) + 1);
	if (new == NULL)
		return (NULL);
	new[ft_strlen(s)] = '\0';
	i = 0;
	while (i < ft_strlen(s))
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
/* int main()
{
	char *new;
	char *new2 = "hola noseke";
	new = ft_strmapi(new2, prueba);
	printf ("%s", new);
	printf ("%s", new2);
	return (0);
} */