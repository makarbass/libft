/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:41:44 by bpatrici          #+#    #+#             */
/*   Updated: 2021/04/29 15:54:20 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *arr, int c, size_t n)
{
	int i;
	size_t nk;

	nk = 0;
	i = 0;
	while(nk < n)
	{
		if (arr[i] == c)
		   return (c);
 		else
			i++;		
	nk++;
	}
	return 0;
}

int main()
{
	unsigned char src[15] = "1234567890";
	unsigned char src2[15] = "1234567890";
	char *sym;
	char *sym2;

	sym = memchr(src,'4', 10);
	sym2 = ft_memchr(src,'4',10);

	printf("%c\n", sym[0]);
	printf("%c\n", sym2[0]);
}
