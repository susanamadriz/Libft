/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:04:51 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/03/07 12:58:37 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	safe_malloc(char **token_v, int position, size_t buffer)
{
	token_v[position] = ft_calloc(buffer, sizeof(char));
	if (token_v[position] == NULL)
	{
		while (position >= 0)
			free (token_v[position--]);
		free (token_v);
		return (1);
	}
	return (0);
}

static size_t	count_tokens(char const *s, char delimeter)
{
	size_t	tokens;
	int		inside_token;

	tokens = 0;
	while (*s)
	{
		inside_token = 0;
		while (*s == delimeter && *s)
			s++;
		while (*s != delimeter && *s)
		{
			if (inside_token == 0)
			{
				tokens++;
				inside_token = 42;
			}
			s++;
		}
	}
	return (tokens);
}

static int	fill(char **token_v, char const *s, char delimeter)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == delimeter && *s)
			s++;
		while (*s != delimeter && *s)
		{
			len++;
			s++;
		}
		if (len > 0)
		{
			if (safe_malloc(token_v, i, len + 1))
				return (1);
			ft_strlcpy(token_v[i], s - len, len + 1);
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	tokens;
	char	**token_v;

	if (s == NULL)
		return (NULL);
	tokens = 0;
	tokens = count_tokens(s, c);
	token_v = ft_calloc((tokens + 1), sizeof(char *));
	if (NULL == token_v)
		return (NULL);
	token_v[tokens] = NULL;
	if (fill (token_v, s, c))
		return (NULL);
	return (token_v);
}

/* int main()
{
	char	*str = "      split       this for   me  !       ";
	char **result;
	size_t i;

	result = ft_split(str, ' ');
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
} */