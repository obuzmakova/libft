/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 16:01:31 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/23 16:14:30 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*p1;

	if (!size)
		return (NULL);
	if (!(p1 = (void*)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(p1, size);
	return (p1);
}
