/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:09:27 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/22 16:51:31 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	s;

	s = ft_strlen(needle);
	if (!*needle)
		return ((char*)haystack);
	if (!*haystack || s > len)
		return (NULL);
	while (len > 0 && s <= len)
	{
		if (ft_strncmp(haystack, needle, s) != 0)
		{
			haystack++;
			len--;
		}
		else
			return ((char*)haystack);
	}
	return (NULL);
}
