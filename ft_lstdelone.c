/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:02:28 by bammar            #+#    #+#             */
/*   Updated: 2022/08/10 18:21:26 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free((void *)lst);
}

// int main(void)
// {
// 	t_list * l =  ft_lstnew(malloc(1));
// 	ft_lstdelone(l, free); l = 0;
// 	puts("hi");
// 	return (0);
// }