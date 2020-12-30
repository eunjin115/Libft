/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 16:58:08 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/30 17:42:38 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_check_space(char c)
{
	char	*space;
	int		i;

	space = "\t\n\v\f\r ";
	i = 0;
	while (space[i] != '\0')
	{
		if (c == space[i])
			return (1);
		i++;
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	long int		result;
	int				minus;

	result = 0;
	minus = 1;
	while (ft_check_space(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result *= 10;
		result += *str - '0';
		if (result > 2147483647 && minus == 1)
			return (-1);
		if (result > 2147483648 && minus == -1)
			return (0);
		str++;
	}
	return (result * minus);
}
