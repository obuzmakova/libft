/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 15:48:29 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/22 12:31:31 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*p1;

	p1 = (char*)dst;
	while (len > 0)
	{
		if (*src)
			*p1++ = *src++;
		else
			*p1++ = '\0';
		len--;
	}
	return (dst);
}
