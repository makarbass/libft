/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <bpatrici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:28:35 by bpatrici          #+#    #+#             */
/*   Updated: 2022/01/25 15:29:53 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	ret;
	size_t	i;

	ret = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (ret);
	while (src[i] != '\0' && size - 1 > 0)
	{
		dst[i] = src[i];
		size--;
		i++;
	}
	dst[i] = '\0';
	return (ret);
}
