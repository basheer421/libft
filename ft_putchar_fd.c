/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:35:08 by bammar            #+#    #+#             */
/*   Updated: 2022/07/24 16:35:09 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	char	cc;

	cc = c;
	write(fd, &cc, 1);
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
    ft_putchar_fd('h', file);
    cl = close(file);
    printf("%d\n", cl); // 0 for succes
    return (0);
}
*/