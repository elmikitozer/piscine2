/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tabTEST.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:47:48 by myevou            #+#    #+#             */
/*   Updated: 2023/08/03 22:11:37 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	prev;

	prev = 0;
	while (prev < (size) / 2)
	{
		ft_swap(&tab[prev], &tab[(size - 1) - prev]);
		prev++;
	}
}

int	main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6};
	int size = 7;
	int	i;

	i = 0;
	while (i < size)
		{
			printf("%i", tab[i]);
			i++;
		}
	printf("\n");
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
		{
			printf("%i", tab[i]);
			i++;
		}
	return (0);
}
