/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:52:48 by bammar            #+#    #+#             */
/*   Updated: 2022/08/05 18:24:50 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*arr;

	i = 0;
	arr = (unsigned char *)s;
	while (i < n)
	{
		if (arr[i] == (unsigned char)c)
			return ((void *)(arr + i));
		i++;
	}
	return (NULL);
}
/* TEST
#include <string.h>

int	main(void)
{
	char	x[];
	void	*y;
	void	*z;

    x[] = {0, 1, 2 , 3, 4};
    y = ft_memchr(x, 2 + 256, 3);
    z = memchr(x, 2 + 256, 3);
    printf("ft_method: %p, original method: %p\n", y, z);
    if (y == z)
        printf("congrats\n");
    return (0);
}
*/