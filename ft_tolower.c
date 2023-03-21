/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:54:17 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:18:27 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int argument)
{
	if (argument >= 'A' && argument <= 'Z')
		argument += 'a' - 'A';
	return (argument);
}
