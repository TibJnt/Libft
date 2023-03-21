/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:50:42 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:00:25 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			if (del != NULL)
			{
				while (lst && *lst)
				{
					node = (*lst)->next;
					ft_lstdelone((*lst), del);
					*lst = node;
				}
			}
		}
	}
}
