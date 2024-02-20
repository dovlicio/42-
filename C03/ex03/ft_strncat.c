/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:53:29 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/13 10:35:10 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[12] = "aaaaa";
	char	dest2[12] = "aaaaa";

	printf("Result1: %s\n", ft_strncat(dest, "bbbbbbb", 10));
	printf("Result2: %s\n", strncat(dest2, "bbbbbbb", 10));
	return (0);
}
*/
