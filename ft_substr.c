/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:39:47 by bammar            #+#    #+#             */
/*   Updated: 2022/07/31 11:35:42 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static size_t	slen(char *str)
{
	size_t	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static char	*empty_string(void)
{
	char	*s;

	s = malloc(1);
	if (!s)
		return (NULL);
	s[0] = '\0';
	return (s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;
	size_t	strlen;
	size_t	char_count;

	if (!s || (size_t)start >= slen((char *)s) || slen((char *)s) == 0)
		return (empty_string());
	strlen = slen((char *)s);
	char_count = 0;
	if (len + start < strlen)
		char_count = (len);
	else
		char_count = (strlen - (size_t)start);
	s2 = malloc(char_count + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (i < char_count)
	{
		s2[i] = s[i + (size_t)start];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/* TEST
int	main(void)
{
	char	*s;

    s = ft_substr("tripouille", 5, 2);
    printf("ft_method: %s\n", s);
	free(s);
    return (0);
}
*/