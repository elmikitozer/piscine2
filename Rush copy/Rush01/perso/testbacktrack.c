#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void print_tab(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 24)
	{
		while (j < 4)
		{
			write (1, &tab[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}


void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	swap(char *c1, char *c2)
{
	char	temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

void	Backtrack(char *s, int a, int n, char **tab, int row)
{
	int	i;

	i = 0;
	row = 0;
	if (a == n)
	{
		tab[row] = s;
		row++;
	}
	else
	{
		i = a;
		while (i <= n)
		{
			swap ((s + a), (s + i));
			Backtrack(s, a + 1, n, tab, row);
			swap((s + a), (s + i));
			i++;
		}
	}
}


int	main(void)
{
	int		n;
	char	*s;

	char *tab[24];
	s = malloc(4 * sizeof(char));
	s = "1234";
	n = ft_strlen(s);
	Backtrack(s, 0, n - 1, tab, 0);
	// print_tab(tab);
}

int mat [4][4]={2,1,4,3,3,4,1,2,1,2,3,4,4,3,2,1}

while (tab[1][i])
{
	int i;
	int v;
	int ref;

	i = 0
	v = 0;
	ref = tab[1][1]
	while (tab [i + 1])
	{
		if (tab[i][1] <= tab [i + 1][1])
			ref = tab [i + 1];
			v++;
		i++;
	}
	return v +1;
}

