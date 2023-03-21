/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:47:43 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:17:45 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (start >= ft_strlen(s) || s[0] == '\0')
		len = 0;
	else if ((start + len) == (ft_strlen(s) + 1) || len > ft_strlen(s))
		len = ft_strlen(s) - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	if (len > 0)
		ft_strlcpy(sub, (char *)(s + start), len + 1);
	else
		sub[0] = '\0';
	return (sub);
}
