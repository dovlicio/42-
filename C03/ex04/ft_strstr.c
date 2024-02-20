/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:47:58 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/13 17:12:19 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s1;
	char	*s2;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		s1 = str;
		s2 = to_find;
		while (*s1 == *s2 && *s1 && *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello World!";
	char	to_find[] = "World";
	char	*result = ft_strstr(str, to_find);
	char	*result2 = strstr(str, to_find);
	if (result != 0)
	{
		printf("%s\n", result);
		printf("%s\n", result2);
	}
	return (0);
}
*/
