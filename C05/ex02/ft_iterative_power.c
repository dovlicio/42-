/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:17:17 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/18 16:29:25 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	while (power-- > 1)
		result *= nb;
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_iterative_power(10, 0));
	printf("%d\n", ft_iterative_power(10, 5));
	printf("%d\n", ft_iterative_power(10, 1));
	return (0);
}
*/
