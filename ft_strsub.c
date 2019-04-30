/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:07:23 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/27 19:52:39 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p1;

	if (!s || start > ft_strlen(s))
		return (NULL);
	if (!(p1 = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	p1 = ft_strncpy(p1, &s[start], len);
	p1[len] = '\0';
	return (p1);
}
