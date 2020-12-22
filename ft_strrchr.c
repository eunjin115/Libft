/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 18:07:26 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/22 18:39:21 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strrchr(const char *str, int c)
{
	const char	*tmp;
	int			i;

	if (c == 0)
		return ((char *)&str[ft_strlen(str)]);
	tmp = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			tmp = &str[i];
		i++;
	}
	return ((char *)tmp);
}
