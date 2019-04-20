/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 20:59:08 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/17 21:14:20 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*dup;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	dup = (char*)malloc(sizeof(*str) * (i + 1));
	if (!dup)
		return (NULL);
	str = dup;
	while (*s1)
	{
		*str++ = *s1++;
	}
	*str = '\0';
	return (dup);
}
