/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:35:31 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/10 11:58:40 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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
		printf("Error: Invaild number of arguments");
		return (1);
	}
	result = ft_str_is_lowercase(argv[1]);
	printf("Result: %d", result);
	return (0);
}
*/
