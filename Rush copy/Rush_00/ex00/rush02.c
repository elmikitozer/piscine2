/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:03:01 by myevou            #+#    #+#             */
/*   Updated: 2023/08/05 14:34:32 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_putchar.c"

int	ft_p_1row(int y)
{
	int	col;

	col = 1;
	while (col <= y)
	{
		if (col == 1)
		{
			ft_putchar('A');
		}
		else if (col == y)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		col++;
	}
	ft_putchar('\n');
}

int	ft_p_2row(int y)
{
	int	col;

	col = 1;
	while (col <= y)
	{
		if (col == 1)
		{
			ft_putchar('C');
		}
		else if (col == y)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		col++;
	}
	ft_putchar('\n');
}

void	ft_p_o_row(int y)
{
	int	col;

	col = 1;
	while (col <= y)
	{
		if (col == 1 || col == y)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		col++;
	}
	ft_putchar('\n');
}

void	rush00(int x, int y)
{
	int	line;

	line = 1;
	while (line <= x)
	{
		if (line == 1)
		{
			ft_p_1row(y);
		}
		else if (line == x)
		{
			ft_p_2row(y);
		}
		else
		{
			ft_p_o_row(y);
		}
		line++;
	}
}
