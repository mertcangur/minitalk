/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgur <mgur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:10:07 by mgur              #+#    #+#             */
/*   Updated: 2022/12/09 19:52:22 by mgur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	check_pid(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (!(ft_isdigit(s[i])))
		{
			ft_printf("\e[31musega: ./client <server_pid> <text to send>\e[0m\n");
			return (0);
		}
		i++;
	}
	return (1);
}

void	bit_sets(int pid, char i)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((i & (0x80 >> bit)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	pid;

	if (argc == 3)
	{
		if (!check_pid(argv[1]))
			return (0);
		i = 0;
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			bit_sets(pid, argv[2][i]);
			i++;
		}
		bit_sets (pid, '\n');
	}
	else
		ft_printf("\e[31musega: ./client <server_pid> <text to send>\e[0m\n");
	return (0);
}
