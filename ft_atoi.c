/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:49:30 by bammar            #+#    #+#             */
/*   Updated: 2022/08/10 21:31:46 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	is_space(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

static int	super_bad_case(int sign)
{
	if (sign == 1)
		return (-1);
	else if (sign == -1)
		return (0);
	return (1);
}

static int	bad_case(char *x, int sign, int y, int zeros)
{
	int		i;
	char	*max;

	if (y - zeros > 19)
		return (super_bad_case(sign));
	max = "9223372036854775808";
	if (sign == 1)
		max = "9223372036854775807";
	i = 0;
	while (x[i] != 0)
	{
		if (x[i] > max[i])
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		else if (x[i] < max[i])
			return (1);
		i++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			y;
	long long	val;
	int			sign;
	int			zeros;

	sign = 1;
	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	val = 0;
	y = 0;
	zeros = 0;
	while (str[i + y] != 0 && (str[i + y] >= '0' && str[i + y] <= '9'))
	{
		val = (val * 10) + (str[i + y++] - '0');
		if (val == 0)
			zeros++;
	}
	if (y - zeros >= 19 && bad_case((char *)str + i, sign, y, zeros) != 1)
		return (bad_case((char *)str + i, sign, y, zeros));
	return (val * sign);
}

/* TEST
// #include <stdlib.h>
// int	main(void)
// {

// 	printf("ft_method: %llu,\noriginal: %llu \n",
					(unsigned long long)ft_atoi("	\t-000009223372036854775811"),
						(unsigned long long)atoi("	\t-000009223372036854775811"));
// 	// if (ft_atoi("") == atoi(""))
// 	// 	puts("ok");
// 	return (0);
// }
*/