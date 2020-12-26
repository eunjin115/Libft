/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:10:30 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/26 13:58:30 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strndup(const char *str, int n)
{
	char *result;
	result = (char *)malloc(sizeof(char) * n + 1);
	int i = 0;
	while(i < n)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

size_t get_count_words(char const *str, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != 0)
	{
		if(str[i] != c && (str[i + 1] == c || str[i + 1] == 0))
			cnt++;
		i++;
	}
	return (cnt);
}

char	**ft_split(char const *str, char c)
{
	int i;
	int n;
	int start;
	int index;
	char **result;

	if (str == 0)
		return (NULL);
	i = 0;
	n = get_count_words(str, c);
	result = (char **)malloc(sizeof(char *) * (n + 1));
	start = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (!is_char_set(str[i], c) && is_char_set(str[i-1], c))
			start = i;
		if ((is_char_set(str[i], c) && !(is_char_set(str[i-1], c))))
			result[index++] = ft_strndup(str + start, i - start);
		else if(!str[i + 1] && !is_char_set(str[i], c))
			result[index++] = ft_strndup(str + start, i - start +1);
		i++;
	}
	result[index] = NULL;
	return (result);
}