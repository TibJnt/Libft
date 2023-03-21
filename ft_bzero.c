/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:38:25 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 19:57:14 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)(str + i)) = 0;
		i++;
	}
	return (str);
}
