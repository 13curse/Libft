/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:37:04 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/15 09:37:04 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_separator(char c, char separator)
{
    return (c == separator);
}

static int	count_words(const char *str, char *charset)
{
	int	count = 0;
	int	in_word = 0;

	while (*str)
	{
		if (!is_separator(*str, separator) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_separator(*str, separator))
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*copy_word(const char *str, int start, int end)
{
	char	*word;
	int	i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return ((void *)0);
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}



char	**ft_split(char const *s, char c)
{
	char	**result;
	int	word_count;
	int	i;
	int	start,
	int	end;

	if (!s)
		return ((void *)0);
	word_count = count_words(str, charset);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return ((void *)0);
	i = 0;
	start = 0;
	while (i < word_count)
	{
		while (is_separator(s[start], c))
			start++;
		end = start;
		while (s[end] && !is_separator(s[end], c))
			end++;
		result[i] = copy_word(s, start, end);
		if (!result[i])
		{
			while (i < 0)
				free(result[--i]);
			free(result);
			return ((void *)0);
		}
		start = end;
		i++;
	}
	result[i] = ((void *)0);
	return (result);
}