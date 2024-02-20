/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:15:43 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/09 14:57:03 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int *pb;

	a = 2;
	b = 3;
	pa = &a;
	pb = &b;
	printf("Before: %d / %d\n", a, b);
	ft_swap(pa, pb);
	printf("After: %d / %d\n", a, b);
	return (0);
}
*/
