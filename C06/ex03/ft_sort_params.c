/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:45:02 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/17 17:53:45 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (*s1 - *s2);
}

void	sorting_argv(char *argv[], int argc_len)
{
	char	*index_adress;
	int		i;
	int		j;

	i = 1;
	while (i < argc_len)
	{
		index_adress = argv[i];
		j = i - 1;
		while ((j >= 0) && (ft_strcmp(argv[j], index_adress) > 0))
		{
			argv[j + 1] = argv[j];
			j--;
		}
		argv[j + 1] = index_adress;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc != 1)
	{
		sorting_argv(&argv[1], argc - 1);
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
