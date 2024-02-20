/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:16:24 by rluari            #+#    #+#             */
/*   Updated: 2023/07/27 18:12:53 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

bool	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i + 1] == '\0')
			break ;
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] < 33 || base[i] > 126))
			return (1);
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || (base[j] == '+'
					|| base[j] == '-' || base[j] == ' ' 
					|| (base[j] < 33 || base[j] > 126)))
				return (1);
			j++;
		}
		i++;
	}
	if (i == 0)
		return (1);
	return (0);
}

int	ft_is_part_of_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

bool	ft_check_error_str(char *str, int *i, int *minuses)
{
	while (str[*i] == ' ' || str[*i] == '\f' || str[*i] == '\t' 
		|| str[*i] == '\r' || str[*i] == '\v')
	{
		if (str[*i] == '\0')
			return (1);
		(*i)++;
	}
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			*minuses *= -1;
		if (str[*i] == '\0')
			return (1);
		(*i)++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	minuses;
	int	res;
	int	pos_in_base;

	i = 0;
	minuses = 1;
	res = 0; 
	if (check_base(base) || ft_check_error_str(str, &i, &minuses))
		return (0);
	pos_in_base = ft_is_part_of_base(base, str[i]);
	while (pos_in_base != -1)
	{
		res *= base_len(base);
		res += pos_in_base;
		i++;
		pos_in_base = ft_is_part_of_base(base, str[i]);
	}
	return (res *= minuses);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("  +++---123", "01"));
	printf("%d\n", ft_atoi_base("  +++---123", "0123456789"));
	printf("%d\n", ft_atoi_base("  +++---123", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("  +++---123", "01234567"));
	printf("%d\n", ft_atoi_base("  +++---123", "012314567"));
	printf("%d\n", ft_atoi_base("  +++---a123", "01234567"));
	printf("%d\n", ft_atoi_base("  +++---123", "0123-7"));
}
*/
