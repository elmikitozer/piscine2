/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:59:55 by myevou            #+#    #+#             */
/*   Updated: 2023/08/21 13:16:55 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct	node
{
	char *nb_fig;
	char *nb_let;
	struct node *next;
}	node;

node	*create_linked_list("Dict")
{
	int i;
	node *list;
	node *n;
	int	number;

	i = 0;
	*list = (NULL);
	while (i < "sizeofDict")
	{
		// number = ft_atoi(argv[i]);
		n = malloc(sizeof(node));
		if (!n)
			return (0); // faire a garbage collection
		// if (input == node.nb_fig)
		// 	ft_putstr(node.nb_let);
		n->nb_fig = "1ere colonne du file";
		n->nb_let = "2e colonne du file";
		n->next = NULL;
		n->next = list;
		list = n;
	}
	return (list);
}
void read_the_dict(node *list)
{
	node *ptr;

	ptr = list;
	while (!ptr)
	{
		node *next;
		if(ptr->nb_fig == "nombre qu'on veut")
			ft_putstr(ptr->nb_let);
		next = ptr->next;
		free (ptr);
		ptr = next;
	}
}



