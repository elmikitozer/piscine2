int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_atoi_rec(char *nb)
{
	int len = ft_strlen(nb);
	int cnb;
	char l_digit;

	if (len == 1)
		return(nb[0] - '0');
	l_digit = nb[len - 1];
	cnb = l_digit - '0';
	nb[len - 1] = '\0';
	return cnb + 10 * ft_atoi_rec(nb);
}


#include <stdio.h>

int main(void)
{
	printf("%i\n", ft_atoi_rec("254654"));
	return (0);
}
