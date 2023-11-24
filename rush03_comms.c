/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03_comms.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:03:01 by myevou            #+#    #+#             */
/*   Updated: 2023/08/06 13:45:17 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

int	ft_p_1lrow(int y) // fonction qui imprime la premiere (et derniere ligne, c'est les memes)
{
	int	col; // on determine un compteur de colones

	col = 1; // que l'on initialise a 1
	while (col <= y) // qui ne doit pas depasser (mais peut etre egal) au nombre de colones maximum qui correspond a la variable y
	{
	{
		if (col == 1) // si on est sur la premiere colonne :
		{
			ft_putchar('A'); // on imprime un 'A'
		}
		else if (col == y) // sinon, si on est sur la derniere colonne :
		{
			ft_putchar('C'); // on imprime un 'C'
		}
		else // sinon :
		{
			ft_putchar('B'); // on imprime un 'B'
		}
		col++; // on ajoute + 1 a la variable colonne pour signifier que l'on passe a la colonne suivante
	}
	ft_putchar('\n'); // on est sorti de la boucle while cela signifie que l'on a imprime la totalite de la ligne, on imprime donc un retour a la ligne '\n'
}

void	ft_p_o_row(int y) // fonction qui imprime les lignes intermediaires qui fonctionne de la meme maniere que la fonction precedente qui imprime la premiere et la dernere ligne
{
	int	col; // on determine un compteur de colones

	col = 1; // que l'on initialise a 1
	while (col <= y) // qui ne doit pas depasser (mais peut etre egal) au nombre de colones maximum qui correspond a la variable y
	{
		if (col == 1 || col == y) // si on est sur la premiere ou la derniere colonne :
		{
			ft_putchar('B'); // on imprime un 'B'
		}
		else // sinon :
		{
			ft_putchar(' '); // on imprime un espace : ' '
		}
		col++; // on ajoute + 1 a la variable col pour signifier que l'on passe a la colonne suivante
	}
	ft_putchar('\n'); // on est sorti de la boucle while cela signifie que l'on a imprime la totalite de la ligne, on imprime donc un retour a la ligne '\n'
}

void	rush00(int x, int y) // fonction qui regarde la ligne sur laquelle on se situe et decide quelle ligne imprimer (la 1ere, la dernniere ou une ligne intermediaire)
{
	int	line; // on determine un compteur de ligne

	line = 1; // que l'on initialise a 1
	while (line <= x) // qui ne doit pas depasser (mais peut etre egal) au nombre de lignes maximum qui correspond a la variable x
	{
		if (line == 1 || line == x) // si on est sur la premiere ou la derniere ligne :
		{
			ft_p_1lrow(y); // on appelle la fonction "ft_p_1lrow()" pour imprimer la premiere ou la derniere ligne
		}
		else // sinon :
		{
			ft_p_o_row(y); // on appelle la fonction "ft_p_o_row()" pour imprimer une ligne intermediare
		}
		line++; // on ajoute + 1 a la variable line pour signifier que l'on passe a la ligne suivante
	}
	}
}
