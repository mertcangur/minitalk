/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:57:28 by mgur              #+#    #+#             */
/*   Updated: 2022/11/01 13:13:56 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *c)
{
	int	i;

	i = 0;
	if (c)
	{
		while (c[i])
		{
			ft_putchar(c[i]);
			i++;
		}
		return (i);
	}
	else
	{
		i += ft_putstr("(null)");
		return (i);
	}
}
