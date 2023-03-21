/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:22:20 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:05:40 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size1;
	int		size2;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (!join)
		return (NULL);
	ft_strlcpy(join, (char *)s1, (size1 + size2 + 1));
	ft_strlcat(join, (char *)s2, (size1 + size2 + 1));
	return (join);
}
