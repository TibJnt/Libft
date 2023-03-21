/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:16:52 by tjeunet           #+#    #+#             */
/*   Updated: 2023/03/21 16:17:09 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// funcion %c para imprimir un solo caracter

void	print_char(va_list arg, int *arg_len)
{
	char	c;

	c = va_arg(arg, int);
	*arg_len += write(1, &c, 1);
}

// funcion %s para imprimir una string

void	print_str(va_list arg, int *arg_len)
{
	char	*str;

	str = va_arg(arg, void *);
	if (str == NULL)
		ft_putstr("(null)", arg_len);
	else
		ft_putstr(str, arg_len);
}

// funcion %d %i 

void	print_int(va_list arg, int *arg_len)
{
	int		num;

	num = va_arg(arg, int);
	ft_putnbr(num, arg_len);
}

// funcion %u para imprimir un unsigned int

void	print_uint(va_list arg, int *arg_len)
{
	unsigned int	num;

	num = va_arg(arg, unsigned int);
	ft_putnbr_u(num, arg_len);
}
