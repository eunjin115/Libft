/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:37:37 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/22 18:39:46 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t size);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char *	ft_strchr(const char *str, int c);
char *	ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);


#endif