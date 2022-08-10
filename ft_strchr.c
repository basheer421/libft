/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:56:33 by bammar            #+#    #+#             */
/*   Updated: 2022/08/05 18:25:22 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	slen;

	slen = 0;
	while (s[slen] != 0)
		slen++;
	if (c == 0)
		return ((char *)s + slen);
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
/* TEST
#include <string.h>
int	main(void)
{
	char	x[];

	x[] = "tripouille";
	printf("ft_method: %p, original method: %p\n",
			ft_strchr(x, 0),
			strchr(x, 0));
	return (0);
}
*/