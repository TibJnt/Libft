/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:19:30 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:01:17 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew((*f)(lst->content));
	if (!head)
		return (NULL);
	node = head;
	lst = lst->next;
	while (lst)
	{
		node->next = ft_lstnew((*f)(lst->content));
		if (!node->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		lst = lst->next;
		node = node->next;
	}
	return (head);
}
