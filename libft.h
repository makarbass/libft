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
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memchr(const void *arr, int c, size_t n);
char *ft_strchr(const char *str, int ch);
char *ft_strrchr(const char *str, int ch);

int ft_strlen(char *str);
int ft_isalnum(int arg);
int ft_isalpha(int arg);
int ft_isascii(int arg);
int ft_isdigit(int arg);
int ft_isprint(int arg);
int ft_tolower(int arg);
int ft_toupper(int arg);

#endif
