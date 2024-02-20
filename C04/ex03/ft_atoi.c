/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:27:26 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/27 17:47:57 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count_minus;
	int	result;

	result = 0;
	count_minus = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			count_minus++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	if (result > 0 && (count_minus % 2 != 0))
		result = -result;
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("Result: %d\n", ft_atoi("  ---+--+1234ab567"));
	printf("Result: %d\n", atoi("  ---+--+1234ab567"));
	return (0);
}
*/
