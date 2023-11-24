/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:59:26 by myevou            #+#    #+#             */
/*   Updated: 2023/08/16 16:30:01 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int	main(void)
{
	t_point	point;
	// #include<stdio.h>
	// printf(" x = %i\ny = %i\n", point.x, point.y);
	set_point(&point);
	// printf(" x = %i\ny = %i\n", point.x, point.y);
	return(0);
}
