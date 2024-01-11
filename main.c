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

int	main(void)
{
	const char *cadena = "Hello, World!";
	size_t	machete = ft_strlen(cadena);

	printf("%zu", machete);
	return (0);
}
