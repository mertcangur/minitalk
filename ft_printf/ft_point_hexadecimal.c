/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:03:43 by mgur              #+#    #+#             */
/*   Updated: 2022/11/01 14:35:15 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_point_hexadecimal(void *input)
{
	unsigned long	adress;
	int				i;
	char			*str;

	adress = (unsigned long)input;
	i = ft_putstr("0x");
	str = ft_itoa_base(adress, "0123456789abcdef");
	i += ft_putstr(str);
	free(str);
	return (i);
}
