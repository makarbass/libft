/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:21:34 by bpatrici          #+#    #+#             */
/*   Updated: 2021/04/29 12:57:59 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
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

int main()
{
	unsigned char src[15] = "1234567890";
	ft_memset(src, '1', 5);
	unsigned char src2[15] = "1234567890";
	memset(src2, '1', 5);
	printf("my: %s\n", src);
	printf("original: %s\n", src2);
	return 0;
}
