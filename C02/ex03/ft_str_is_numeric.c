/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:20:19 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/10 11:29:14 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (str[i] > 57))
			return (0);
		else
			i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	result;

	result = ft_str_is_numeric("");
	printf("Result: %d", result);
	return (0);
}
*/
