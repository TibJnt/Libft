/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:47:57 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:08:59 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				size;
	char			*mapi;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	mapi = (char *)malloc(sizeof(char) * (size + 1));
	if (!mapi)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapi[i] = (*f)(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
