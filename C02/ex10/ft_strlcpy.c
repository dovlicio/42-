/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:05:10 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/11 12:50:33 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while (src_len < (size -1) && src[src_len] != '\0')
		src_len++;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (src_len);
}
/*
int	main(void)
{
	char	src[] = "Hello, world!";
	char	dest[10];
	unsigned int	size = sizeof(dest);
	unsigned int	len;

	printf("Source: %s\n", src);
	printf("Size: %u\n", size);
	len = ft_strlcpy(dest, src, size);
	printf("Destination: %s\n", dest);
	printf("Lenght: %u\n", len);
	return (0);
}
*/
