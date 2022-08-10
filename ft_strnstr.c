/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 09:35:45 by bammar            #+#    #+#             */
/*   Updated: 2022/08/05 18:33:16 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	slen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (slen((char *)needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != 0)
	{
		j = 0;
		while (needle[j] != 0 && haystack[i + j] == needle[j] && i + j < len)
			if (needle[++j] == 0)
				return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
/* TEST
#include <string.h>
int	main(void)
{
    char x[] = "my name is basheer";
    char y[] = "basheer";
    printf("ft_method: %s, original method: \n",
        ft_strnstr(x, y, sizeof(char) * strlen(x)));
        //strnstr(x, y, (sizeof(char) * strlen(x))));
    return (0);
}
*/