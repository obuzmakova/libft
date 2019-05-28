/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:49:55 by mleticia          #+#    #+#             */
/*   Updated: 2019/05/27 16:49:50 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *tmp;

	if (*alst && alst && del)
	{
		while (*alst)
		{
			tmp = (*alst)->next;
			ft_lstdelone(&(*alst), del);
			*alst = tmp;
		}
		free(*alst);
		*alst = NULL;
	}
}
