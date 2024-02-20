/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:47:45 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/27 15:10:58 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

bool	is_valid_base(const char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || ft_strlen(base) < 2)
		return (false);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (false);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

void	ft_putnbr_base_recursive(long nbr, const char *base, int base_lenght)
{
	char	c;

	if (nbr < 0)
	{
		c = '-';
		write(1, &c, 1);
		nbr = -nbr;
	}
	if (nbr >= base_lenght)
		ft_putnbr_base_recursive(nbr / base_lenght, base, base_lenght);
	c = base[nbr % base_lenght];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_lenght;
	char	c;

	if (!is_valid_base(base))
		return ;
	base_lenght = ft_strlen(base);
	if (nbr == 0)
	{
		c = base[0];
		write(1, &c, 1);
	}
	else
		ft_putnbr_base_recursive((long)nbr, base, base_lenght);
	write(1, "\n", 1);
}
/*
int	main(void)
{
	ft_putnbr_base(-1, "10");
	ft_putnbr_base(-0, "1023456789");
	ft_putnbr_base(-0, "1023456789ABCDEF");
	ft_putnbr_base(-0, "10234567");
	ft_putnbr_base(-0, "10");
	ft_putnbr_base(-0, "");
	ft_putnbr_base(-0, "01+");
	return (0);
}
*/
