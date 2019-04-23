/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:44:22 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/23 13:48:45 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char*)dst;
	p2 = (unsigned char*)src;
	if (src > dst)
	{
		while (len--)
			*p1++ = *p2++;
	}
	else
		while (len--)
			*(p1 + len) = *(p2 + len);
	return (dst);
}
