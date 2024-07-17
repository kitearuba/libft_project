/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:42:18 by chrrodri          #+#    #+#             */
/*   Updated: 2024/07/07 20:40:57 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_str(const char *s, char c)
{
	size_t	count;
	int		in_substr;

	count = 0;
	in_substr = 0;
	while (*s)
	{
		if (*s != c && in_substr == 0)
		{
			in_substr = 1;
			count++;
		}
		else if (*s == c)
			in_substr = 0;
		s++;
	}
	return (count);
}

static char	**free_result(char **result, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static char	*get_next_word(const char *s, char c, const char **next_start)
{
	const char	*start;
	const char	*end;

	while (*s && *s == c)
		s++;
	start = s;
	while (*s && *s != c)
		s++;
	end = s;
	*next_start = s;
	return (ft_substr(start, 0, end - start));
}

char	**ft_split(const char *s, char c)
{
	char		**result;
	size_t		sub_str;
	size_t		word_index;
	const char	*next_start;

	if (!s)
		return (NULL);
	sub_str = count_str(s, c);
	result = (char **)malloc((sub_str + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	next_start = s;
	word_index = 0;
	while (word_index < sub_str)
	{
		result[word_index] = get_next_word(next_start, c, &next_start);
		if (!result[word_index])
			return (free_result(result, word_index));
		word_index++;
	}
	result[word_index] = NULL;
	return (result);
}
