/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:15:40 by bpatrici          #+#    #+#             */
/*   Updated: 2021/05/11 15:16:20 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numc(char const *s, char c)
{
	int	t;
	int	i;

	i = 0;
	t = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			t++;
		}
		i++;
	}
	return (t);
}

void	ft_clean(char **arr)
{
	while (*arr)
	{
		free(*arr);
		arr++;
	}
	free(arr);
}

char	**osnova(char **arr, char const *s, int t, char c)
{
	int		i;
	char	*copy;

	i = 0;
	copy = (char *)s;
	while (i < t)
	{
		copy = ft_strchr(copy, c);
		if (!copy)
			copy = ft_strlen(s) + (char *)s;
		if (copy - s > 0)
			arr[i++] = ft_substr(s, 0, copy - s);
		if (!arr[i - 1])
		{
			ft_clean(arr);
			return (NULL);
		}
		s = copy;
		s++;
		copy++;
	}
	arr[i] = (NULL);
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	*ch;
	char	**arr;
	int		t;

	if (!c || !s)
		return (NULL);
	ch = &c;
	t = numc(s, c);
	arr = (char **)malloc(sizeof(char *) * (t + 1));
	if (!arr)
		return (NULL);
	s = ft_strtrim(s, ch);
	arr = osnova(arr, s, t, c);
	if (!arr)
		return (NULL);
	return (arr);
}
