/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:21:04 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:08:14 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dst;
	unsigned int	len_src;

	len_dst = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (size <= len_dst)
	{
		return (len_src + size);
	}
	while (src[i] && i < size - len_dst - 1)
	{
		dest[len_dst + i] = src[i];
		i++;
	}
	dest[len_dst + i] = '\0';
	return (len_dst + len_src);
}
