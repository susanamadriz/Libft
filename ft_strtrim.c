/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:45:55 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/02/21 12:45:57 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && (ft_strchr(set, s1[i])))
	{
		i++;
	}
	while (j > 0 && (ft_strchr(set, s1[j])))
	{
		j--;
	}
	new = ft_substr(s1, i, j - i + 1);
	return (new);
}

/* int	main(void)
{
	char const	string1 [] = "cacacaviva la vidaca";
	char const	checkstr [] = "ca";

	printf("%s\n", ft_strtrim(string1, checkstr));
} */