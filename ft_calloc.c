/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:17:58 by bammar            #+#    #+#             */
/*   Updated: 2022/08/14 16:45:19 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if (count && size > size * count)
		return (NULL);
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
		ptr[i++] = '\0';
	return ((void *)ptr);
}
