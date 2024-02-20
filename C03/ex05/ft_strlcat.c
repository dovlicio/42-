/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:02:18 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/13 17:12:44 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;
	unsigned int	remaining;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	total_len = dest_len + src_len;
	if (dest_len < size)
	{
		remaining = size - dest_len -1;
		i = 0;
		while (src[i] && i < remaining)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (total_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[15] = "This is ";
	char	src[] = "a potentially long string";
	unsigned int	size = sizeof(dest);
	unsigned int	result = ft_strlcat(dest, src, size);

	printf("Destination string: %s\n", dest);
	printf("Resulting lenght: %d\n", result);
	return (0);
}
*/
