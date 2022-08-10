/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 09:36:01 by bammar            #+#    #+#             */
/*   Updated: 2022/08/08 21:26:45 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static char	*empty_string(void)
{
	char	*s;

	s = (char *)malloc(1 * sizeof(char));
	if (!s)
		return (NULL);
	s[0] = '\0';
	return (s);
}

static int	slen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ss;

	if (!s || !f || slen(s) == 0)
		return (empty_string());
	ss = (char *)malloc((slen(s) + 1) * sizeof(char));
	if (!ss)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		ss[i] = f(i, s[i]);
		i++;
	}
	ss[i] = 0;
	return ((char *)ss);
}

/* TEST
#include <unistd.h>
char	mapi(unsigned int i, char c)
{
	static int	indexArray[11];

	indexArray[11] = {0};
	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	main(void)
{
	char	*x;

    // const char	s[] = "LoReM iPsUm";
	x = ft_strmapi("", mapi);
    printf("%s\n", x);
    return (0);
}
*/