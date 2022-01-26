/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <bpatrici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:13:34 by bpatrici          #+#    #+#             */
/*   Updated: 2022/01/25 15:33:00 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*todel;

	todel = *lst;
	while (*lst)
	{
		*lst = (*lst)->next;
		ft_lstdelone(todel, del);
		todel = *lst;
	}
}
