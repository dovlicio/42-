/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:30:47 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/18 17:25:57 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power < 1)
		return (1);
	if (power < 2)
		return (nb);
	if (nb == 0 && power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(10, 0));
	printf("%d\n", ft_recursive_power(10, 5));
	printf("%d\n", ft_recursive_power(10, 1));
	return (0);
}
*/
