/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:15:15 by myevou            #+#    #+#             */
/*   Updated: 2023/08/21 13:46:08 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_charset(char *str, char *charset, int p)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == str[p])
			return (1);
		i++;
	}
	return (0);
}

void pass_sep(char *str, char *charset, int *p)
{
		while (ft_charset(str, charset, *p) == 1)
		*p = *p + 1;
}

char **ft_split(char *str, char *charset)
{
	int		p;
	int		i;
	int		j;
	char	**split;

	p = 0;
	i = 0;
	split = malloc(sizeof(char*) * 100);
	if (!split)
		return (0);
	pass_sep(str, charset, &p);
	while (str[p])
	{
		split[i] = malloc(sizeof(char) * 150);
		if (!split[i])
			return (NULL);
		j = 0;
		while ((!ft_charset(str, charset, p)) && str[p])
			split[i][j++] = str[p++];
		split[i][j++] = 0;
		pass_sep(str, charset, &p);
		i++;
	}
	split[i] = 0;
	return (split);
}


// #include <stdlib.h>
// #include <stdio.h>

// int    ft_charset_in(char *str, int    i, char *charset)
// {
//     int    p;

//     p = 0;
//     while (charset[p])
//     {
//         if (charset[p] == str[i])
//             return (1);
//         p++;
//     }
//     return (0);
// }

// char    **ft_split(char *str, char *charset)
// {
//     int    p;
//     char **split;
//     int    k;
//     int    j;

//     p = 0;
//     k = 0;
//     if(!(split = malloc(sizeof(char *) * 256)))
//         return (NULL);
//     while (ft_charset_in(str, p, charset) == 1)
//         p++;
//     while (str[p])
//     {
//         if(!(split[k] = malloc(sizeof(char ) * 4096)))
//             return (NULL);
//         j = 0;
//         while (ft_charset_in(str, p , charset) == 0)
//             split[k][j++] = str[p++];
//         while(ft_charset_in(str, p, charset) == 1)
//             p++;
//         k++;
//     }
//     split[k] = 0;
//     return(split);
// }

// // int    main(void)
// // {
// //     int    i;
// //     i = 0;
// //     char *alpha = "haahahahah";
// //     char *charster = "l";

// //     while (i < 6)
// //     {
// //         printf("%s", (ft_split(alpha, charster))[i]);
// //         i++;
// //     }
// // }


#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char *str, char *charset);

int        c_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

int        c_strctn(char *str1, char *str2, int at)
{
    int    len;
    int    i;

    len = c_strlen(str2);
    i = 0;
    while (i < len)
    {
        str1[at + i] = str2[i];
        i++;
    }
    str1[at + i] = 0;
    return (len + at);
}

char    *c_strautojoin(char **strs, char *sep)
{
    char    *str;
    int        len;
    int        seplen;
    int        i;
    int        j;

    len = 1;
    seplen = c_strlen(sep);
    i = 0;
    while (strs[i] != NULL)
    {
        len += c_strlen(strs[i]);
        if (strs[i + 1] != NULL)
            len += seplen;
        i++;
    }
    str = malloc(len * sizeof(char));
    i = 0;
    j = 0;
    while (strs[j])
    {
        i = c_strctn(str, strs[j++], i);
        if (strs[j])
            i = c_strctn(str, sep, i);
    }
    return (str);
}

int        main(void)
{
    char **tab;

    tab = ft_split("Ceci&est$un##############################################################################################################################################################succes@!", "&$#@");
    printf("%s\n", c_strautojoin(tab, " "));
    tab = ft_split("Success", "CUT");
    printf("%s\n", c_strautojoin(tab, " "));
    tab = ft_split("Success", "");
    printf("%s\n", c_strautojoin(tab, " "));
    tab = ft_split("", "");
    printf("OK\n");
    tab = ft_split("", "CUT");
    printf("OK\n");
    tab = ft_split("       ", "       ");
    printf("OK\n");
    tab = ft_split("         ", "       ");
    printf("OK\n");
}
