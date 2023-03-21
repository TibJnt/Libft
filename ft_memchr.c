/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:45:40 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:02:07 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned long	i;
	char			*s;

	s = (char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	return (0);
}
