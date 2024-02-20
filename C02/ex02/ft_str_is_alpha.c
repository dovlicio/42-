/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:41:30 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/10 11:19:18 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 122)
			return (0);
		else if (str[i] > 90 && str[i] < 97)
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

	result = ft_str_is_alpha("1sdasd");
	printf("Result: %d", result);
	return (0);
}
*/
