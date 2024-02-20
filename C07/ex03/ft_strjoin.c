/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:33:54 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/20 11:27:21 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	total_len(char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	result;

	result = 1;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			result++;
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (sep[j++])
			result++;
		i++;
	}
	return (result);
}

void	append_sep(char *dest, char *sep, int *k)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		dest[*k] = sep[i];
		i++;
		(*k)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	dest = (char *)malloc(total_len(strs, sep, size) * sizeof(char));
	if (size == 0)
		*dest = '\0';
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			dest[k] = strs[i][j++];
			k++;
		}
		if (size > 1 && (i < size - 1))
			append_sep(dest, sep, &k);
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
/*
#include <unistd.h>

int	main(void)
{
	char	*strs[5];
	strs[0] = "a1";
	strs[1] = "b2";
	strs[2] = "c3";
	strs[3] = "d4";
	strs[4] = "e5";
	char 	*sep = "+";
	char 	*result;

	result = ft_strjoin(5, strs, sep);
	write(1, result, 14);
	write(1, "\n", 1);
	free(result);
	return (0);
}
*/
