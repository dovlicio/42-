/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:00:03 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/10 12:10:05 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90))
			return (0);
		else
			i++;
	}
	return (1);
}
/*
int	main(int argc, char *argv[])
{
	int	result;

	if (argc != 2)
	{
		printf("Error: Invalid number of arguments");
		return (1);
	}
	result = ft_str_is_uppercase(argv[1]);
	printf("Result: %d", result);
	return (0);
}
*/
