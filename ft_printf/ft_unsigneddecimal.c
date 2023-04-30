/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigneddecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:04:37 by mgur              #+#    #+#             */
/*   Updated: 2022/11/01 15:37:14 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigneddecimal(unsigned int nbr)
{
	int		len;
	char	*str;

	str = ft_itoa_base(nbr, "0123456789");
	len = ft_putstr(str);
	free(str);
	return (len);
}
