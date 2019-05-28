/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:59:47 by mleticia          #+#    #+#             */
/*   Updated: 2019/05/27 14:10:00 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ptr;

	if ((ptr = (t_list*)malloc(sizeof(t_list))))
	{
		if (!content)
		{
			ptr->content = NULL;
			ptr->content_size = 0;
		}
		else
		{
			if (!(ptr->content = (size_t*)malloc(content_size)))
			{
				free(ptr);
				return (NULL);
			}
			ft_memcpy(ptr->content, content, content_size);
			ptr->content_size = content_size;
		}
		ptr->next = NULL;
		return (ptr);
	}
	else
		return (NULL);
}
