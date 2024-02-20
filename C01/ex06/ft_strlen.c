/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:05:16 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/09 15:22:52 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_strlen(char *str)
{
	int	num_of_chars;

	num_of_chars = 0;
	while (str[num_of_chars] != '\0')
		num_of_chars++;
	return (num_of_chars);
}
/*
int	main(void)
{
	int		result;

	result = ft_strlen("asdfg6");
	printf("Result: %d", result);
	return (0);
}
*/
