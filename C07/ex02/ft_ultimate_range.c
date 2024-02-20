/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:32:36 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/19 16:19:00 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	size;
	int	i;
	
	size = ft_ultimate_range(&range, 100, 1000);
	if (size == 0)
	{
		printf("Range is NULL. Size: %d\n", size);
		return (-1);
	}
	else if (size == -1)
	{
		printf("Memory allocation failed.\n");
		return (-1);
	}
	else
	{
		i = 0;
		while (i < size)
			printf("%d ", range[i++]);
	}
	printf("Range: %d\n", size);
	free(range);
	return (0);
}
*/
