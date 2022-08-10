/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:25:44 by bammar            #+#    #+#             */
/*   Updated: 2022/07/27 18:12:24 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (!dstsize)
		return (srclen);
	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (srclen);
}

/* TEST

#include <string.h>

int	main(void)
{
	char	src[];

	src[] = "cooucu";
	char dest[9]; memset(dest, 'A', 5);
	char dest2[9]; memset(dest2, 'A', 5);
	ft_strlcpy(dest, src, 2);
	strlcpy(dest2, src, 2);
	printf("dest len : %lu\n", strlen(dest2));
	printf("%s\n", (dest));
	printf("%s\n", (dest2));
	return (0);
}
*/