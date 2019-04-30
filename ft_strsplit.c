/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:24:05 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/28 17:10:04 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmp(const char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (*(const unsigned char*)s1 - *(const unsigned char*)s2);
		else
			return (0);
		s1++;
	}
	return (0);
}

static int	ft_size(char const *s, char c)
{
	int		i;
	int		num;

	i = 0;
	num = 0;
	while (*s)
	{
		if (i == 1 && (ft_cmp(s, &c) == 0))
			i = 0;
		if (i == 0 && (ft_cmp(s, &c) != 0))
		{
			i = 1;
			num++;
		}
		s++;
	}
	return (num);
}

static int	ft_len(char const *s, char c)
{
	int		i;

	i = 0;
	while (ft_cmp(s, &c) != 0)
	{
		i++;
		s++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**p1;
	int		i;
	int		b;
	int		size;

	i = 0;
	if (!s)
		return (0);
	size = ft_size((const char*)s, c);
	if (!(p1 = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	while (size)
	{
		while (*s == c)
			s++;
		b = ft_len(s, c);
		p1[i] = ft_strsub(s, 0, b);
		if (!(ft_strsub(s, 0, b)))
			free(p1);
		s += b;
		i++;
		size--;
	}
	p1[i] = NULL;
	return (p1);
}
