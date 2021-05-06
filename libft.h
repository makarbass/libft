/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:38:45 by bpatrici          #+#    #+#             */
/*   Updated: 2021/05/05 11:51:43 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void ft_bzero(void *dest, size_t n);
void *ft_memset(void *dest, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memchr(const void *arr, int c, size_t n);
void * ft_memmove(void *dst, const void *src, size_t len);
char *ft_strchr(const char *str, int ch);
char *ft_strrchr(const char *str, int ch);
void *ft_memccpy (void *destination, const void *source, int c, size_t n);
size_t ft_strlcpy (char *dst, const char *src, size_t size);
size_t ft_strlcat (char *dst, const char *src, size_t dstsize);
char * ft_strnstr (const char *haystack, const char *needle, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_strncmp (const char *s1, const char *s2, size_t n);
int ft_strlen(const char *str);
int ft_isalnum(int arg);
int ft_isalpha(int arg);
int ft_isascii(int arg);
int ft_isdigit(int arg);
int ft_isprint(int arg);
int ft_tolower(int arg);
int ft_toupper(int arg);
void * ft_calloc(size_t count, size_t size);
char * ft_strdup(const char *s1);

#endif
