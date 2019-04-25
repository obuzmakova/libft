/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:18:51 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/24 22:22:54 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	int		k;
	char	*p1;

	if (!s)
		return (0);
	i = ft_strlen(s);
	while (*s == ' ' || *s == '\t' || *s == '\n')
	{
		s++;
		i--;
	}
	k = ft_strlen(s);
	if (k == 0)
		return ((char*)s);
	while (s[k - 1] == ' ' || s[k - 1] == '\t' || s[k - 1] == '\n')
	{
		k--;
		i--;
	}
	if (!(p1 = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	p1 = ft_strncpy(p1, s, i);
	p1[i] = '\0';
	return (p1);
}