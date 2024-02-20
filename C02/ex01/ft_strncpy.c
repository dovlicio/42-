/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:00:37 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/11 16:49:54 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest_start;
	unsigned int	i;

	dest_start = dest;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest_start);
}
/*
int	main(void)
{
	char	dest[4];

	printf("Regular: Hello\n");
	ft_strncpy(dest, "Hello", 3);
	printf("Copied file: %s\n", dest);
	return (0);
}
*/
