/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:41:46 by bpatrici          #+#    #+#             */
/*   Updated: 2021/05/05 11:50:34 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int arg)
{
	if (arg > 64 & arg < 91)
		return 1;
	if (arg > 96 & arg < 123)
		return 2;
	else 
		return 0;
}
