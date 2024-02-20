/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:12:56 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/17 15:32:59 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	argv_last_index;

	if (argc != 1)
	{
		argv_last_index = 0;
		while (argc > 1)
		{
			argv_last_index++;
			argc--;
		}
		while (argv_last_index > 0)
		{
			i = 0;
			while (argv[argv_last_index][i])
				write(1, &argv[argv_last_index][i++], 1);
			write(1, "\n", 1);
			argv_last_index--;
		}
	}
	return (0);
}
