/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:44:47 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/19 16:32:56 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	i;

	if (min >= max)
		return (NULL);
	numbers = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
		numbers[i++] = min++;
	return (numbers);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*result = ft_range(-100, 100);
	int	i;;

	i = 0;
	if (result != NULL)
	{
		while (i < 100 - -100)
			printf("%d, ", result[i++]);
		printf("\n");
		free(result);
	}
	else
		printf("Memory alocation failed or invalid input.\n");
	return (0);
}
*/
