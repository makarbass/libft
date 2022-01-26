/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <bpatrici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:12:43 by bpatrici          #+#    #+#             */
/*   Updated: 2022/01/26 16:07:54 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	void	*content;

	first = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			while (first)
			{
				new = first->next;
				del(first->content);
				free(first);
				first = new;
			}
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
