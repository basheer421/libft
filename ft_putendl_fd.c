/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 09:38:00 by bammar            #+#    #+#             */
/*   Updated: 2022/07/30 09:38:01 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i] != 0)
			write(fd, &s[i++], 1);
	}
	write(fd, "\n", 1);
}

/* TEST
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int	main(void)
{
	int	file;
	int	cl;

    file = open("test.txt", O_WRONLY | O_CREAT, S_IRWXU | S_IRWXO | S_IRWXG);
    printf("%d\n", file);
    ft_putendl_fd("lol it works with a new line without my typing it...", file);
    cl = close(file);
    printf("%d\n", cl); // 0 for succes
    return (0);
}
*/