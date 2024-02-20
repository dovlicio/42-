/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:48:52 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/18 16:06:34 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb == 2147483647)
			return (0);
		else if (nb % i == 0)
		{
			nb++;
			i = 2;
		}
		else
			i++;
	}
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	/*printf("%d\n", ft_find_next_prime(2147483640));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(10));
	printf("%d\n", ft_find_next_prime(50));*/
	printf("%d\n", ft_find_next_prime(-60));
	return (0);
}

