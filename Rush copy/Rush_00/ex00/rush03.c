/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush033.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 23:15:03 by myevou            #+#    #+#             */
/*   Updated: 2023/08/06 23:16:24 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_p_1lrow(int y)
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
		if (line == 1 || line == x)
		{
			ft_p_1lrow(y);
		}
		else
		{
			ft_p_o_row(y);
		}
		line++;
	}
}
