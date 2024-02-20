/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdamnjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:52:44 by vdamnjan          #+#    #+#             */
/*   Updated: 2023/07/08 13:40:24 by hrother          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_conditions(int x, int y, int row, int col)
{
	if (col == 1 || col == x || row == 1 || row == y)
	{
		if (col == 1 && (row == 1 || row == y))
			ft_putchar('A');
		else if (col == x && (row == 1 || row == y))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x < 1 || y < 1)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			check_conditions(x, y, row, col);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
