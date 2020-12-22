/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:47:58 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/22 18:04:57 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strchr(const char *str, int c)
{
	int i;
	i = 0;
	if (c == 0)
		return ((char *)&str[ft_strlen(str)]);
	while (str[i] != 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
