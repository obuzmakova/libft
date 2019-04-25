/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:07:23 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/24 19:32:00 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p1;

	if (!s || !len)
		return (0);
	if (!(p1 = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	p1 = ft_strncpy(p1, &s[start], len);
	p1[len] = '\0';
	return (p1);
}
