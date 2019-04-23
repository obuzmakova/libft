/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 19:44:14 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/17 19:48:05 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char *p1;

	p1 = (char*)s;
	while (*p1)
	{
		if (*p1 != (char)c)
			p1++;
		else
			return (p1);
	}
	if ((char)c == '\0')
		return (p1);
	return (NULL);
}
