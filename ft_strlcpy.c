/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:26:49 by bpatrici          #+#    #+#             */
/*   Updated: 2021/04/29 15:41:22 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char buf[10];

int main()
{
	char *str = "Образец строки";
	size_t sz;

	buf[0] = '\0';

	sz = srtlcpy(buf, str, sizeof(buf));
	printf("%s\n", buf);

	return 0;
}
