/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:41:50 by bpatrici          #+#    #+#             */
/*   Updated: 2021/04/29 12:54:22 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void *ft_bzero(void *dest, size_t n)
{
	size_t nul;
	unsigned char *s;

	s = dest;
	nul = 0;
	while(n > nul)
	{
		s[nul] = 0;
		nul++;
	}	
	return(s);
}

int main()
{
	unsigned char src[15] = "1234567890";	
	unsigned char src2[15] = "1234567890";
	ft_bzero(src, 5);
	printf("my func: %s\n", src);
	printf("original func: %s\n", bzero(src2,5));
	return 0;
}
