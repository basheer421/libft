/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:59:15 by bammar            #+#    #+#             */
/*   Updated: 2022/08/05 18:17:24 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)b;
	i = 0;
	while (i < len)
		s[i++] = (unsigned char)c;
	return (b);
}
/* TEST
int	main(void)
{
	char	x[];
	char	*y;

	x[] = "hello";
	y = ft_memset(x, 'A', 5);
	printf("%s\n", y);
	return (0);
}
*/