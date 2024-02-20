/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:41:15 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/26 13:21:04 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_putstr_in_array(char *str, int start, int end)
{
	char	*temp;
	char	*ptr;

	temp = (char *)malloc((end - start + 1) * sizeof(char));
	ptr = temp;
	while (start < end)
	{
		*ptr = str[start];
		ptr++;
		start++;
	}
	*ptr = '\0';
	return (temp);
}

void	put_sub_in_array(char *str, char *charset, int start, char **array)
{
	int		end;
	int		i;

	end = start;
	while (str[end])
	{
		i = 0;
		while (charset[i])
		{
			if (str[end] == charset[i])
			{
				*array = ft_putstr_in_array(str, start, end);
				return ;
			}
			i++;
		}
		end++;
	}
	*array = ft_putstr_in_array(str, start, end);
}

void	count_sub(char *str, char *charset, char **array)
{
	int	i;
	int	j;
	int	count_next;
	int	k;

	k = 0;
	count_next = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
			{
				count_next = 0;
				break ;
			}
			j++;
		}
		if (!charset[j] && !count_next++)
			put_sub_in_array(str, charset, i, &array[k++]);
		i++;
	}
}

void	calculate_substrings(char *str, char *charset, int *sub_count)
{
	int	i;
	int	j;
	int	count_next;

	count_next = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
			{
				count_next = 0;
				break ;
			}
			j++;
		}
		if (!charset[j] && !count_next++)
			*sub_count = *sub_count + 1;
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**subs;

	i = 1;
	calculate_substrings(str, charset, &i);
	subs = (char **)malloc(i * sizeof(char *));
	count_sub(str, charset, subs);
	subs[i - 1] = NULL;
	return (subs);
}
/*
int	main(void)
{
	char **result = ft_split(",,??asd,,,,???asdas,,,???", ",?a");
	int	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
