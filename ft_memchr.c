/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:00:47 by bpatrici          #+#    #+#             */
/*   Updated: 2021/05/05 14:23:41 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *arr, int c, size_t n)
{
	const char *a;
	size_t i;

	a = arr;
	i = 0;
	
	while (i < n)
	{
		if (a[i] == c)
			return ((void *)a + i);
		i++;
	}
	return 0;
}
