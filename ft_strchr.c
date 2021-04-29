/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:10:50 by bpatrici          #+#    #+#             */
/*   Updated: 2021/04/29 13:54:18 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int ch)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return((char *)str+i);
		else
			i++;
	}
	return(0);
}

int main()
{
	char str[11] = "0123456789";
	char str2[11] = "0123456789";
	int ch = 'k';
	char *ach;
	char *ach2;

	ach = strchr(str,ch);
	ach2 = ft_strchr(str2, ch);

	printf("OR: %s \n", ach);
	printf("MY: %s \n", ach2);

	return 0;
}
