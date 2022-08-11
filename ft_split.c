/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:29:57 by bammar            #+#    #+#             */
/*   Updated: 2022/08/11 18:15:23 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char		**ft_split(char const *s, char c);
static char	*chrskip(char *s, char c);
static int	get_word_count(const char *s, char c);
static int	get_word_length(char *s, char c);

static void	set_word(char *s, int word_number, char c, char **words_array)
{
	int	z;
	int	y;

	z = 0;
	y = 0;
	while (s[y] != 0 && s[y] != c)
		words_array[word_number][z++] = s[y++];
	words_array[word_number][z] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	*ss;
	char	**sa;
	int		i;

	if (!s)
		return (NULL);
	ss = (char *)s;
	sa = malloc((get_word_count(s, c) + 1) * sizeof(char *));
	if (!sa)
		return (NULL);
	ss = (char *)s;
	i = 0;
	while (i < get_word_count(s, c))
	{
		ss = chrskip(ss, c);
		sa[i] = (char *)malloc(get_word_length(ss, c) + 1);
		if (!sa[i])
			return (NULL);
		set_word(ss, i, c, sa);
		while (*ss != 0 && *ss != c)
			ss++;
		i++;
	}
	sa[i] = 0;
	return (sa);
}

static int	get_word_length(char *s, char c)
{
	int	y;

	y = 0;
	while (*s != 0 && *s != c)
	{
		s++;
		y++;
	}
	return (y);
}

static char	*chrskip(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != 0 && s[i] == c)
		i++;
	return (s + i);
}

static int	get_word_count(const char *s, char c)
{
	int		word_count;

	word_count = 0;
	while (*s != 0)
	{
		s = chrskip((char *)s, c);
		if (*s == 0)
			return (0);
		while (*s != 0 && *s != c)
			s++;
		s = chrskip((char *)s, c);
		if (s != 0)
			word_count++;
	}
	return (word_count);
}

/* TEST
int	main(void)
{
	char	**z;
	// int		a;

    // char x[] = "    tripouille   42 sd s my";
    z = ft_split(" / hello /my /name   /is    /Basheer    ", ' ');
	for (int i = 0; i < 5; i++)
		puts(z[i]);
    for (int i = 0; i < 5; i++)
        free(z[i]);
    free(z);
    return (0);
}
*/
