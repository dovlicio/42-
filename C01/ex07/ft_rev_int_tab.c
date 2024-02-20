/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:52:40 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/09 15:36:00 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
int	main(void)
{
	int	tab[5];
	int	size;

	size = 5;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	printf("Original: %d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	ft_rev_int_tab(tab, size);
	printf("Reversed: %d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
*/
