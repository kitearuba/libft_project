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

static size_t	count_str(char const *s, char c)
{
	size_t	count;
	int		in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s != c && in_substring == 0)
		{
			in_substring = 1;
			count++;
		}
		else if (*s == c)
			in_substring = 0;
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

static char	*get_next_word(char const *s, char c, size_t *index)
{
	size_t	start;
	size_t	end;
	char	*word;

	while (s[*index] && s[*index] == c)
		(*index)++;
	start = *index;
	while (s[*index] && s[*index] != c)
		(*index)++;
	end = *index;
	word = ft_substr(s, start, end - start);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	sub_str;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	sub_str = count_str(s, c);
	result = (char **)malloc((sub_str + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < sub_str)
	{
		result[j] = get_next_word(s, c, &i);
		if (!result[j])
			return (free_result(result, j));
		j++;
	}
	result[j] = NULL;
	return (result);
}
