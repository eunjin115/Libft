/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:15:55 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/22 17:12:52 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t					ft_strlcpy(char * dst, const char * src, size_t size)
{
	size_t		index;
	size_t		src_len;

	if (dst == 0 || src == 0)
		return (0);
	index = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < size - 1)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (src_len);
}
