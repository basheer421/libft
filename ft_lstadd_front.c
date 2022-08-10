/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:55:33 by bammar            #+#    #+#             */
/*   Updated: 2022/08/09 21:50:12 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new->next = *(lst);
	*(lst) = new;
}

// int	main(void)
// {
// 	t_list	*l;
// 	t_list	*new_l;

// 	l = ft_lstnew((void *)1);
// 	new_l = ft_lstnew((void *)26);
// 	ft_lstadd_front(&l, new_l);
// 	printf("%d\n", (int)l->next->content);
// 	return (0);
// }
