/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:35:26 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/02/16 11:35:28 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t total_size;
    char *pointer;

    total_size = count * size;
    if (size != 0 && total_size >= SIZE_MAX)
        return (NULL);
    pointer = malloc(total_size);
    if (pointer == NULL)
        return (NULL);
    while (total_size > 0)
    {
        pointer[total_size] = 0;
        total_size--;
    }
    return (pointer);    
}
int main()
{
	int *prueba;

	prueba = calloc(10, sizeof(int));
	for (int i = 0; i < 10; i++)
		printf("%i", *(prueba + i)); //= prueba[i]
	free (prueba);
	return(0);
}