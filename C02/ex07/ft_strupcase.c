/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:29:19 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/11 12:33:49 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (&*str);
}
/*
int	main(void)
{
	char	string[] = "welcome";
	
	printf("Before: %s\n", string);
	ft_strupcase(string);
	printf("After: %s\n", string);
	return (0);
}
*/
