/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:10:11 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/23 15:37:30 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	length;
	char	*result;

	if (s == 0)
		return (NULL);
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	length = ft_strlen(s);
	if (length > start + len)
		length = start + len;
	i = start;
	while (i < length)
	{
		result[i - start] =  s[i];
		i++;
	}
	result[i - start] = '\0';
	return (result);
}