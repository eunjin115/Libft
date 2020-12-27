/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:10:30 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/27 10:56:59 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(const char *str, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

size_t	get_words_len(char const *s, char c)
{
	size_t			i;
	size_t			len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

void	mem_free(char **result, size_t count)
{
	size_t	i;

	i = 0;
	if (count > 0)
		while (i < count)
			free(result[i++]);
	free(result);
}

char	**make_split(char const *s, size_t words, char c, char **result)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	while (i < words)
	{
		j = 0;
		while (*s == c)
			s++;
		len = get_words_len(s, c);
		if (!(result[i] = (char *)malloc(sizeof(char) * (len + 1))))
		{
			mem_free(result, i);
			return (NULL);
		}
		while (j < len)
		{
			result[i][j] = *s++;
			j++;
		}
		result[i][j] = '\0';
		i++;
	}
	return (result);
}

char		**ft_split(char const *str, char c)
{
	char	**result;
	size_t		words;

	if (str == 0)
		return (NULL);
	words = count_words(str, c);
	if (!(result = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	result = make_split(str, words, c, result);
	result[words] = NULL;
	return (result);
}