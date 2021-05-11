/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 13:27:20 by bpatrici          #+#    #+#             */
/*   Updated: 2021/05/11 13:28:24 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(src);
	if (j > dstsize)
		k = k + dstsize;
	else
	{
		k = k + j;
		while (src[i] != '\0' && j < dstsize -1)
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	return (k);
}
