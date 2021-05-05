/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:21:34 by bpatrici          #+#    #+#             */
/*   Updated: 2021/05/05 11:49:50 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *dest, int c, size_t n)
{
	size_t nul;
	unsigned char *s;
	
	nul = 0;
	s = dest;

	while(n > nul)
	{
		s[nul] = c;
		nul++;
	}
	return (s);
}
