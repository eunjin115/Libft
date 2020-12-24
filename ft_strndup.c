/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 23:00:22 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/24 23:04:31 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strndup(char *str, int n)
{
	char *result;
	result = (char *)malloc(sizeof(char) * n +1);
	int i = 0;
	while(i<n)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}