/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:27:35 by myevou            #+#    #+#             */
/*   Updated: 2023/08/17 14:14:40 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	long	rtnb;

	rtnb = 1;
	if (nb < 0)
		return (0);
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	if (rtnb > 2147483647 || rtnb < -2147483648)
		return (0);
	rtnb = nb * ft_recursive_power(nb, power - 1);
	return (rtnb);
}
// #include <stdio.h>
// int main (void)
// {
// 	printf("%i \n", ft_recursive_factorial(12, 5));
// 	return (0);
// }
