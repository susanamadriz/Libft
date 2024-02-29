/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <sjuan-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:28:44 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/01/11 10:29:01 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
 

/* int	main(void)
{
	char const	string1 [] = "cacacaviva la vidaca";
	char const	checkstr [] = "ca";

	printf("%s\n", ft_strtrim(string1, checkstr));
} */

/*  int main ()
{
	char letra;
	letra = '7';

	if (ft_isalpha(letra))
	{	
		printf("Es una letra");
	}
	else
	{
		printf("no es una letra");
	}
	return (0);
} */
/* int main ()
{
	char numero;
	numero = '?';

	if (ft_isdigit(numero))
	{	
		printf("Es un numero");
	}
	else
	{
		printf("no es un numero");
	}
	return (0);
} */
/* int main()
{
	char alnum;
	alnum = '?';

	if (ft_isalnum(alnum))
	{
		printf("Es alfanumerico");
	}
	else
	{
		printf("No es alfanumerico");
	}
	return (0);
} */
/*
int	main(void)
{
	const char *cadena = "Hello, World!";
	size_t	machete = ft_strlen(cadena);

	printf("%zu", machete);
	return (0);
}
*/
/*
int	main(void)
{
	char *string;
	string = strdup("Hello, World!");
	puts(string);
	
	ft_memset(string,'$', 4);
	puts(string);

	return(0);
}
*/
/*
int	main(void)
{
	char string[] = "Hello. World!";
	printf("%s\n", string);

	ft_bzero(string, 4);
	printf("%s\n", string);
	return (0);
}
*/
/*
int main(void)
{
	unsigned char *destino;
	const char *origen = "Hola, Mundo!";

	ft_memcpy(destino, origen, 2);
	printf("Debería decir: %s", destino);
	return (0);
}
*/
/* int main(void)
{
	char origen[] = "1234567890";
	char origen2[] = "1234567890";
	// char origen2[] = "1234567890";

	ft_memcpy(origen + 3, origen, 5);
	printf("mimemcpy: %s\n", origen);
	memcpy(origen2 + 3, NULL, 5);
	printf("memcpy: %s\n", origen);
	// ft_memcpy(origen2 + 3, origen2, 6);
	// printf("mi_memcpy: %s\n", origen2);
	return (0);
} */