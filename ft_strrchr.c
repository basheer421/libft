/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:56:47 by bammar            #+#    #+#             */
/*   Updated: 2022/08/05 18:26:01 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	int		slen;

	slen = 0;
	while (s[slen] != 0)
		slen++;
	if (c == 0)
		return ((char *)s + slen);
	i = 0;
	ptr = NULL;
	while (s[i] != 0)
		if (s[i++] == (char)c)
			ptr = (char *)s + i - 1;
	return (ptr);
}
/* TEST
#include <string.h>
int	main(void)
{
	char	x[];

    x[] = "ltripouiel";
    printf("ft_method: %p, original method: %p\n",
        ft_strrchr(x, 0),
		strrchr(x, 0));
    return (0);
}
*/