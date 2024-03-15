/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:06:49 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/02/29 12:34:53 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* char	prueba(unsigned int i, char *s)
{
	char new;
	new = ft_toupper(*s);
	return (new);
} */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/* int main()
{
	char *new;
	char *new2 = "hola noseke";
	new = ft_striteri(new2, prueba);
	printf ("%s", new);
	printf ("%s", new2);
	return (0);
} */
