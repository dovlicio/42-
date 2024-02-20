/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:04:19 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/13 17:13:41 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int	result;
	int	result2;

	if (argc != 3)
	{
		printf("Error:  Invaild number or arguments.");
		return (1);
	}
	result = ft_strcmp(argv[1], argv[2]);
	result2 = strcmp(argv[1], argv[2]);
	printf("Result: %d\n", result);
	printf("Result2: %d\n", result2);
	return (0);
}
*/
