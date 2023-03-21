/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:22:44 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:17:14 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	size;

	if ((char)c == '\0')
		return ((char *)&str[ft_strlen((char *)str)]);
	size = ft_strlen((char *)str) - 1;
	while (size >= 0)
	{
		if (str[size] == (char)c)
			return ((char *)&str[size]);
		size--;
	}
	return (0);
}
