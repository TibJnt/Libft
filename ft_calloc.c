/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:40:29 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 19:57:24 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	tab = malloc(count * size);
	if (tab == NULL)
		return (0);
	while (i < count * size)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
