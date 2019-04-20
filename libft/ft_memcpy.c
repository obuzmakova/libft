/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 17:33:40 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/19 19:28:05 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p1;
	char	*p2;

	p1 = (char*)dst;
	p2 = (char*)src;
	while (n > 0)
	{
		*p1++ = *p2++;
		n--;
	}
	return (dst);
}
