/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:06:10 by myevou            #+#    #+#             */
/*   Updated: 2023/08/21 13:16:55 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read the file once to get the size, close it open it again and copying with the right malloc size.

- open the file
- read the file
- loop tant que le return du read != de la taile du buffer que je lui ai donne and += the return value of read
- close the file

- open the file
#####
- copy the content into a local file with malloc matching the variable that i get with the return values of read.
- clean the number on the input
- take every figure of the number of the input, with multiply by ten the result of the division by ten and read every figure.
- write, after cleaning the begining every matching nb in letters
##OR
- clean before, copy it, then do the rest,
####

.
.
.
- close the file
int	size_file()
{
	int size;
	int bool;
	int fd_to_read;

	fd_to_read = open("numbers.dict",O_RDONLY);
	size = 0;
	while(bool != 0)
	{
		bool = read(fd_to_read, )
	}
}
