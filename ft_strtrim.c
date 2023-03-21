/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:23:14 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:17:25 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			j;
	char		*trim;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	while (j > i && is_in_set(s1[j], set))
		j--;
	j++;
	trim = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, (char *)(s1 + i), (j - i + 1));
	return (trim);
}
