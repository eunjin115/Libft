/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 01:16:17 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/23 13:17:36 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *	ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char *tmp_dst;
	const unsigned char *tmp_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	tmp_dst = (unsigned char*)dst;
	tmp_src = (unsigned char*)src;
	i = 0;
	if (tmp_dst <= tmp_src)
	{
		while (i++ < len)
			*tmp_dst++ = *tmp_src++;
	}
	else
	{
		tmp_dst += len - 1;
		tmp_src += len - 1;
		while(i++ < len)
			*tmp_dst-- = *tmp_src--;

	}
	return (dst);
}


