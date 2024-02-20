/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:16:33 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/09 12:04:54 by lilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rush(int x, int y);

int	string_to_int(const char *str)
{
	int	result;
	int	sign;
	int	i;
	int	digit;

	result = 0;
	sign = 1;
	i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{	
			write(1, "Error: not a number.\n", 21);
			return (-1);
		}
		digit = str[i] - '0';
		result = result * 10 + digit;
		i++;
	}
	return (sign * result);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	
	if (argc == 1)
	{
		rush(5, 3);
		rush('c', 12);
		return (0);
	}

	if (argc != 3)
	{
		write(1, "Error: Invalid number of args.", 30);
		return (1);
	}
	x = string_to_int(argv[1]);
	if (x == -1)
		return (1);
	y = string_to_int(argv[2]);
	rush(x, y);
	return (0);
}
