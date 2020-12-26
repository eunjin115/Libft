/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:10:25 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/26 16:22:28 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;

	if (!s1 | !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	if (len == 0)
		str = ft_calloc(1, 1);
	else
	{
		while (ft_strchr(set, s1[len - 1]))
			len--;
		str = ft_substr(s1, 0, len);
	}
	return (str);
}