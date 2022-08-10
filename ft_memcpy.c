/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:57:47 by bammar            #+#    #+#             */
/*   Updated: 2022/08/05 18:22:38 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <string.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dst;
	s = src;
	i = 0;
	while (i < n)
	{
		if (&d[i] != &s[i])
			d[i] = s[i];
		i++;
	}
	return (dst);
}
/* TEST
int	main(void)
{
	char	src[];
	char	dest[];
	char	s2[];
	char	d2[];

	src[] = "hello world";
	dest[] = "my name is basheer";
	s2[] = "hello world";
	d2[] = "my name is basheer";
	ft_memcpy(dest, src, 5);
	memcpy(d2, s2, 5);
	printf("src: %s\ndest: %s\n", src, dest);
	printf("src2: %s\ndest2: %s\n", s2, d2);
	return (0);
}
*/