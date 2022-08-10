/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 09:35:06 by bammar            #+#    #+#             */
/*   Updated: 2022/07/30 09:35:07 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char		*ft_strjoin(char const *s1, char const *s2);
static int	slen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		s1_len;
	int		s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = slen(s1);
	s2_len = slen(s2);
	s = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < s1_len + s2_len)
	{
		s[i] = s2[i - s1_len];
		i++;
	}
	s[i] = 0;
	return (s);
}

static int	slen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/* TEST
int	main(void)
{
	char	x[];
	char	y[];
	char	*z;

    x[] = "hello";
    y[] = " man";
    z = ft_strjoin(x, y);
    printf("ft_method: %s\n",
        z);
    if (y[4] == 0)
        printf("ok\n");
    return (0);
}
*/