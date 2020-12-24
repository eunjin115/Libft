/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:10:30 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/24 23:04:55 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_char_set(char str, char c)
{
	return (str == c);
}

char **ft_split(char *str, char c)
{
	int i;
	int n;
	int start;
	int index;
	char **result;

	if (str == 0 || c == 0)
		return (NULL);
	n = 1;
	i = 0;
	while (str[i] != '\0')
		if (str[i++] == c)
			n++;
	result = (char **)malloc(sizeof(char *) * (n + 1));
	i = 0;
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
	result[index] = 0;
	return (result);
}