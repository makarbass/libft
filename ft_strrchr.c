/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:07:07 by bpatrici          #+#    #+#             */
/*   Updated: 2021/04/29 14:20:56 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int ch)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			j = i;
			i++;
		}
		else
			i++;
	}
	if (j == 0)
		return 0;
	return ((char *)str+j);
}

int main()
{
	char  str[11] = "0163456769";
	char  str2[11] = "0163456769";
	int ch = 'x';
	char *ach;
	char *ach2;

	ach = strrchr(str, ch);
	ach2 = ft_strrchr(str2,ch);
	printf("OR: %s\n", ach);
	printf("MY: %s\n", ach2);
	return 0;
}

