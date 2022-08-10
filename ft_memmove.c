/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:35:30 by bammar            #+#    #+#             */
/*   Updated: 2022/08/05 18:24:39 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (d > s && i < n)
		i++;
	while (i > 0)
	{
		d[i - 1] = s[i - 1];
		i--;
	}
	while (d < s && i < n)
	{
		if (d[i] != s[i])
			d[i] = s[i];
		i++;
	}
	return ((void *)d);
}
/* TEST
#include <string.h>
int	main(void)
{
    int n = 2;
	char src[] = {67, 68, 67, 68, 69, 0, 45};
	// char dest[] = {67, 67, 68, 68, 69, 0, 45};
	char s2[] = {67, 68, 67, 68, 69, 0, 45};
	// char d2[] = {67, 67, 68, 68, 69, 0, 45};
	printf("%s", ft_memmove(src + 1, src, n));
	printf("\n\n%s", memmove(s2 + 1, s2, n));
	return (0);
}
*/