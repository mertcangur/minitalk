/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_lower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:58:40 by mgur              #+#    #+#             */
/*   Updated: 2022/11/01 14:35:05 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal_lower(unsigned int nbr)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_itoa_base(nbr, "0123456789abcdef");
	len += ft_putstr(str);
	free(str);
	return (len);
}
