/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:19:07 by myevou            #+#    #+#             */
/*   Updated: 2023/08/19 22:26:06 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_show_tab(struct s_stock_str *par);

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*replica;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	replica = malloc ((size + 1) * sizeof(char));
	if (!replica)
		return (0);
	while (src[i])
	{
		replica[i] = src[i];
		i++;
	}
	replica[i] = 0;
	return (replica);
}

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

// int ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return(i);
// }

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					j;
	char				*str;
	char				*cpy;
	struct s_stock_str	*res;

	res = malloc(sizeof(struct s_stock_str) * ac);
	if (!res)
		return (0);
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = ft_strdup(av[i]);
		res[i].copy = ft_strdup(av[i]);
	}
	res[i].size = 0;
	res[i].str = 0;
	res[i].copy = 0;
	return (res);
}

// struct s_stock_str *ft_strs_to_tab(int ac, char **av)
// {
// 	int					i;
// 	int					j;
// 	char				*str;
// 	char				*cpy;
// 	struct s_stock_str	*res;

// 	res = malloc(sizeof(struct s_stock_str) * ac + 1);
// 	i = 0;
// 	while (i < ac)
// 	{
// 		res[i].size = ft_strlen(av[i]);
// 		res[i].str = malloc(sizeof(char) * res[i].size);
// 		res[i].copy = malloc(sizeof(char) * res[i].size);
// 		while (av[i + 1][j])
// 		{
// 			res[i].str[j] = av[i][j];
// 			j++;
// 		}
// 		res[i].copy = res[i].str;
// 	}
// 	res[i].size = 0;
// 	res[i].str = 0;
// 	res[i].copy = 0;
// 	return(res);
// }
