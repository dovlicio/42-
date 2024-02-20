/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:21:37 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/10 19:30:42 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (&*str);
}
/*
int	main(void)
{
	char	string[] = "ASD";

	printf("Before: %s\n", string);
	ft_strlowcase(string);
	printf("After: %s\n", string);
	return (0);
}
*/
