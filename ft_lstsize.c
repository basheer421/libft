/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:51:26 by bammar            #+#    #+#             */
/*   Updated: 2022/08/09 22:02:39 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

// int	main(void)
// {
// 	t_list	*l;
// 	t_list	*l2;
// 	t_list	*l3;

// 	l = ft_lstnew((void *)1);
// 	l2 = ft_lstnew((void *)26);
// 	l3 = ft_lstnew((void *)25);

// 	ft_lstadd_front(&l, l2);
// 	ft_lstadd_front(&l2, l3);
// 	printf("%d\n",ft_lstsize(l));
// 	return (0);
// }