/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:37:37 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/23 02:14:40 by eunjikim         ###   ########.fr       */
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
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char *	ft_strchr(const char *str, int c);
char *	ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void *	ft_memset(void *b, int c, size_t len);
void *	ft_calloc(size_t count, size_t size);
char * ft_strdup(const char *s1);
void	ft_bzero(void *s, size_t n);
void *	ft_memcpy(void *dst, const void *src, size_t n);
void *	ft_memccpy(void *dst, const void *src, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void *	ft_memchr(const void *s, int c, size_t n);
void *	ft_memmove(void *dst, const void *src, size_t len);
char *	ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif