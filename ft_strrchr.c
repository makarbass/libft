/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:07:07 by bpatrici          #+#    #+#             */
/*   Updated: 2021/05/05 11:48:37 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int ch)
{
	int i;
	char *s;

	s = (char *)str;
	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == ch)
			return (&s[i]);
		else
			i--;
	}
	return 0;
}
