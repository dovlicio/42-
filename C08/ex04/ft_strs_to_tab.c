/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:32:00 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/26 12:37:16 by vdamnjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
      write(1, &c, 1);
}
  
void    ft_putnbr(int nb)
{
      if (nb > 9)
          ft_putnbr(nb / 10);
      ft_putchar((nb % 10) + '0');
}
  
void    ft_show_tab(struct s_stock_str *par)
{
      int     i;
  
      i = 0;
      while (par[i].str)
      {
          write(1, par[i].str, par[i].size);
          write(1, "\n", 1);
          ft_putnbr(par[i].size);
          write(1, "\n", 1);
          write(1, par[i].copy, par[i].size);
          write(1, "\n", 1);
          i++;
      }
}


int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i])
		i++;
	copy = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock_tab;

	stock_tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!stock_tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock_tab[i].size = ft_strlen(av[i]);
		stock_tab[i].str = av[i];
		stock_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock_tab[ac].str = 0;
	return (stock_tab);
}

#include <stdio.h>

int	main(void)
{
	char	*strings[] = {
		"Hello",
		"World",
		"How",
		"Are",
		"You"
	};
	t_stock_str	*result;
	result = ft_strs_to_tab(5, strings);
	if (!result)
	{
		printf("Memory allocation error.\n");
		return (1);
	}
	ft_show_tab(result);
	/*int	i = 0;
	while (i < 5)
	{
		printf("String: %d\n", i + 1);
		printf("  Size: %d\n", result[i].size);
		printf("  Str.: %s\n", result[i].str);
		printf("  Copy: %s\n", result[i].copy);
		printf("\n");
		i++;
	}*/
	for (int i = 0; i < 5; i++)
		free(result[i].copy);
	free(result);
	return (0);
}

