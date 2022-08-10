/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 09:37:57 by bammar            #+#    #+#             */
/*   Updated: 2022/07/30 09:37:58 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	c = '0';
	if (n == -2147483648)
	{
		write(fd, "-214", 4);
		ft_putnbr_fd(7483648, fd);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n < 10)
	{
		c += n;
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
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
    ft_putnbr_fd(-2147483648, file);
    write(file, "\n", 1);
    cl = close(file);
    printf("%d\n", cl); // 0 for succes
    return (0);
}
*/