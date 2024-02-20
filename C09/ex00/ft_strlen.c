/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:47:12 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/23 13:48:35 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	num_of_chars;

	num_of_chars = 0;
	while (str[num_of_chars])
		num_of_chars++;
	return (num_of_chars);
}
