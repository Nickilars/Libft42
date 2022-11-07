/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:28:20 by nrossel           #+#    #+#             */
/*   Updated: 2022/11/07 17:59:22 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	ptr = *lst
	if (!lst)
		return ;
	while (lst->next != NULL)
	{
		ptr = lst->next;
		(*del)(lst->content);
		free(*lst);
		lst = ptr->next;
	}
}
