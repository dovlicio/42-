/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:50:55 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/18 17:34:00 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;
	int	y;

	if (nb <= 0)
		return (0);
	x = nb;
	y = 1;
	while (x > y)
	{
		x = (x + y) / 2;
		y = nb / x;
	}
	if (x * x == nb)
		return (x);
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(-1));
	return (0);
}
*/
