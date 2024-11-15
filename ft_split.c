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

static int	count_words(const char *str, char separator)
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
	int	counts[3];
	int	start;

	if (!s)
		return ((void *)0);
	counts[0] = count_words(s, c);
	result = malloc((counts[0] + 1) * sizeof(char *));
	if (!result)
		return ((void *)0);
	counts[1] = 0;
	start = 0;
	while (counts[1] < counts[0])
	{
		while (is_separator(s[start], c))
			start++;
		counts[2] = start;
		while (s[counts[2]] && !is_separator(s[counts[2]], c))
			counts[2]++;
		if (!(result[counts[1]] = copy_word(s, start, counts[2])))
		{
			while (counts[1] > 0)
				free(result[counts[1]]);
			return (free(result), ((void *)0));
		}
		start = counts[2];
		counts[1]++;
	}
	return (result[counts[1]] = ((void *)0), result);
}

/*int	main()
{
	char	*str = "Il, s'agit, d'un, test";
	char	**result;
	int	i;

	result = ft_split(str, ',');
	if (result)
	{
		i = 0;
		while (result[i])
		{
			printf("'%s'\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
		printf("Erreur d'allocation mémoire.\n");
	return (0);
}*/