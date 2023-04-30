/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:05:07 by mgur              #+#    #+#             */
/*   Updated: 2022/11/01 16:02:18 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_decimal(int nbr);
int		ft_putchar(char c);
int		ft_putstr(char *c);
int		ft_check(int i, const char *str, va_list arg);
int		ft_printf(const char *input, ...);
char	*ft_itoa_base(unsigned long nbr, char *i);
int		ft_ln(unsigned long nbr, int i);
int		ft_hexadecimal_lower(unsigned int nbr);
int		ft_unsigneddecimal(unsigned int nbr);
int		ft_check_parser(const char *nbr, va_list arg);
int		ft_hexadecimal_upper(unsigned int nbr);
int		ft_is_argument(char c);
int		ft_point_hexadecimal(void *input);

#endif
