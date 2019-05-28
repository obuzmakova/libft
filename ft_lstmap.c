/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:33:57 by mleticia          #+#    #+#             */
/*   Updated: 2019/05/28 16:21:45 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *ptr;

	if ((ptr = (t_list*)malloc(sizeof(t_list))))
	{
		if (!(ptr->content = (size_t*)malloc(content_size)))
		{
			free(ptr);
			return (NULL);
		}
		tmp = 
