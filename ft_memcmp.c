/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:33:57 by bammar            #+#    #+#             */
/*   Updated: 2022/08/05 18:25:08 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_byte;
	unsigned char	*s2_byte;
	size_t			i;

	s1_byte = (unsigned char *)s1;
	s2_byte = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_byte[i] != s2_byte[i])
		{
			if (s1_byte + i != NULL && s2_byte + i != NULL)
				return (s1_byte[i] - s2_byte[i]);
			else if (s1_byte + i)
				return (s1_byte[i]);
			else if (s2_byte + i)
				return (s2_byte[i]);
		}
		i++;
	}
	return (0);
}
/* TEST
#include <string.h>
int	main(void)
{
	char	s[];
	char	s2[];

    s[] = {-128, 0, 127, 0};
    s2[] = {0, 0, 127, 0};
    printf("ft_method: %d, original method: %d\n",
        ft_memcmp(s2, s, 0), memcmp(s2, s, 0));
    return (0);
}
*/