/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 09:31:53 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/09 15:19:34 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	lenght_of_char;

	lenght_of_char = 0;
	while (str[lenght_of_char] != '\0')
		lenght_of_char++;
	write(1, str, lenght_of_char);
}
/*
int	main(void)
{
	ft_putstr("asdfg");
	return (0);
}
*/
