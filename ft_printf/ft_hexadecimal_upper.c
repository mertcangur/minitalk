/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_upper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:58:53 by mgur              #+#    #+#             */
/*   Updated: 2022/11/01 14:35:09 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal_upper(unsigned int nbr)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_itoa_base(nbr, "0123456789ABCDEF");
	len += ft_putstr(str);
	free(str);
	return (len);
}
