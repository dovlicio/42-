/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:46:20 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/09 15:12:10 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a1;
	int	b2;

	a1 = *a / *b;
	b2 = *a % *b;
	*a = a1;
	*b = b2;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 6;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("Division: %d\n", a);
	printf("Remainder: %d", b);
	return (0);
}
*/
