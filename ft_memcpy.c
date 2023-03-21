/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:53:11 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:02:39 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		*((char *)(dest + i)) = *((char *)(src + i));
		i++;
	}
	return (dest);
}
