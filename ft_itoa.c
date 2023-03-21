/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:14:37 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 19:58:59 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		size;
	int		aux;

	size = ft_size(n);
	tab = (char *)malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	size--;
	aux = size;
	if (n == 0)
		tab[0] = '0';
	if (n < 0)
		tab[0] = '-';
	while (n != 0)
	{
		tab[size] = ft_abs(n % 10) + '0';
		n /= 10;
		size--;
	}
	tab[aux + 1] = '\0';
	return (tab);
}
