/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:04:00 by mgur              #+#    #+#             */
/*   Updated: 2022/11/01 16:00:51 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(int i, const char *str, va_list arg)
{
	int	len;

	len = 0;
	if (str[i] == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (str[i] == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (str[i] == 'd' || str[i] == 'i')
		len += ft_decimal(va_arg(arg, int));
	else if (str[i] == 'u')
		len += ft_unsigneddecimal(va_arg(arg, unsigned int));
	else if (str[i] == 'x')
		len += ft_hexadecimal_lower(va_arg(arg, unsigned long));
	else if (str[i] == 'p')
		len += ft_point_hexadecimal(va_arg(arg, void *));
	else if (str[i] == 'X')
		len += ft_hexadecimal_upper(va_arg(arg, unsigned int));
	else if (str[i] == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_check_parser(const char *str, va_list arg)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			if (ft_is_argument(str[i]))
				len += ft_check(i, str, arg);
		}
		else if (str[i] != '%')
			len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}

int	ft_printf(const char *input, ...)
{
	va_list		arg;
	int			len;
	const char	*str;

	len = 0;
	str = ft_strdup(input);
	va_start(arg, input);
	len += ft_check_parser(str, arg);
	va_end(arg);
	free((void *)str);
	return (len);
}
