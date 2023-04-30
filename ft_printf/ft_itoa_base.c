/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:02:04 by mgur              #+#    #+#             */
/*   Updated: 2022/11/01 14:34:45 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ln(unsigned long nbr, int len)
{
	int				i;
	unsigned long	n;

	i = 1;
	n = (unsigned long)len;
	while (nbr >= n)
	{
		nbr /= n;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(unsigned long nbr, char *base)
{
	int		len;
	int		ln;
	char	*str;

	len = ft_strlen(base);
	ln = ft_ln(nbr, len);
	str = ft_calloc(sizeof(char), (ln + 1));
	str[ln] = '\0';
	while (ln)
	{
		ln--;
		str[ln] = base[nbr % len];
		nbr /= len;
	}
	return (str);
}
