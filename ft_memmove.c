/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:44:22 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/22 16:43:02 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dstt;
	unsigned char *srct;

	dstt = (unsigned char*)dst;
	srct = (unsigned char*)src;
	if (src > dst)
	{
		while (len--)
			*dstt++ = *srct++;
	}
	else
		while (len--)
			*(dstt + len) = *(srct + len);
	return (dst);
}
