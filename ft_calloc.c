/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:17:58 by bammar            #+#    #+#             */
/*   Updated: 2022/08/10 21:32:38 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if (size > size * count)
		return (NULL);
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
		ptr[i++] = '\0';
	return ((void *)ptr);
}
// // /* TEST
// int	main(void)
// {
//     char    *x;
//     char *y;

//     x = (char *)ft_calloc(8539, sizeof(int));
// 	printf("%p\n", x);
// 	free(x);
//     y = (char *)calloc(8539, sizeof(int));
// 	printf("%p\n", y);
//     free(y);
//     return (0);
// }
// // */
