/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:13:10 by tjeunet           #+#    #+#             */
/*   Updated: 2022/09/28 20:03:00 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memset(void *str, int c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)(str + i)) = (unsigned char)c;
		i++;
	}
	return (str);
}
