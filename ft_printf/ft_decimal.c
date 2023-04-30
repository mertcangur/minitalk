/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:57:54 by mgur              #+#    #+#             */
/*   Updated: 2022/11/01 15:29:29 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal(int nbr)
{
	int		len;
	char	*str;
	long	n;

	len = 0;
	n = nbr;
	if (n < 0)
	{
		len += ft_putchar('-');
		n *= -1;
	}
	str = ft_itoa_base(n, "0123456789");
	len += ft_putstr(str);
	free(str);
	return (len);
}
