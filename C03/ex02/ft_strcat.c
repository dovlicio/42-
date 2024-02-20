/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:51:13 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/13 10:34:29 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0')
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
	char	dest[] = "aaaaa";
	char	dest2[] = "aaaaa";
	
	printf("dest: %s\n", dest);
	printf("Appended: %s\n", ft_strcat(dest, "bbbbb"));
	printf("dest: %s\n", dest2); 
	printf("Appended: %s\n", strcat(dest2, "bbbbb"));
	return (0);
}
*/
