/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:48:20 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/23 00:42:52 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *	ft_calloc(size_t count, size_t size)
{
	void * result;

	if(!(result = malloc(size * count)))
		return (NULL);
	ft_memset(result, 0, count * size);
	return (result);
}