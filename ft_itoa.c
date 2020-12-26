/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:10:35 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/26 15:26:27 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int		ft_find_len(int n)
{
	int len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		++len;
		n /= 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char		*str;
	int		len;

	len = ft_find_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		--len;
		str[len] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (str);
}