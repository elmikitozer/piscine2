/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tabTEST.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 19:23:37 by myevou            #+#    #+#             */
/*   Updated: 2023/08/03 23:58:33 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (i < size - 1)
	{
		if (tab[i + 1] < tab [i])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

int	main(void)
{
	int tab[] = {9, 7, 5, 3, 6, 1, 4};
	int size = 7;
	int	i;

	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
		{
			printf("%i", tab[i]);
			i++;
		}
	return (0);
}
