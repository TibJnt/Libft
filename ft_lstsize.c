/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:39:46 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:01:41 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lst_size;

	lst_size = 0;
	while (lst)
	{
		lst_size++;
		lst = lst->next;
	}
	return (lst_size);
}
