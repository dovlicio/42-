/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:22:04 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/13 13:51:33 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 1;
	while ((*s1 != '\0') && (*s2 != '\0') && (i <= n))
	{
		if ((*s1 == *s2) && (i == n))
			return (*s1 - *s2);
		else if (*s1 == *s2)
		{
			s1++;
			s2++;
			i++;
		}
		else
			return (*s1 - *s2);
	}
	if (i <= n)
		return (*s1 - *s2);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Invalid number of arguments.");
		return (1);
	}
	printf("Result1: %d\n", ft_strncmp(argv[1], argv[2], 0));
	printf("Result2: %d\n", strncmp(argv[1], argv[2], 0));
	return (0);
}
*/
