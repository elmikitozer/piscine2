/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:54:11 by myevou            #+#    #+#             */
/*   Updated: 2023/08/20 22:50:49 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_list
{
	int		nb;
	char	*nb_l;
}		t_list;

char	*ft_strdup(char *src);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
char	*ft_getnbr(int fd);
char	*ft_getnblet(int fd, char *c);
t_list	*process(char *file, int i);

#endif
