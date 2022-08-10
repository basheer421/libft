/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:51:36 by bammar            #+#    #+#             */
/*   Updated: 2022/08/08 17:54:19 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static size_t	slen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;
	size_t	dst_len;
	size_t	src_len;

	dst_len = slen(dst);
	src_len = slen((char *)src);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	i = 0;
	while (dst[i] != 0)
		i++;
	y = 0;
	while (i + 1 < dstsize && src[y] != 0)
		dst[i++] = src[y++];
	if (i < dstsize)
		dst[i] = 0;
	while (src[y++] != 0)
		i++;
	return (i);
}

// #include <string.h>
// #include <stdlib.h>

// int main() {
// 	char *dest;

// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	memset(dest, 'r', 15);
// 	size_t x = (ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
//     printf("New target: \"%s\"\n", dest);
// 	printf("x   %zu\n", x);

//     return (0);
// }