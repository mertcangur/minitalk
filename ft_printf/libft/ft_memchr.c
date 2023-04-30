/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:14:18 by mgur              #+#    #+#             */
/*   Updated: 2022/10/18 17:47:58 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str1, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)(str1 + i) == (char)(c))
			return ((char *)(str1 + i));
		i++;
	}
	return (NULL);
}
