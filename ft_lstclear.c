/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:25:15 by hienguye          #+#    #+#             */
/*   Updated: 2023/11/29 11:25:32 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*actual_node;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	actual_node = *lst;
	while (actual_node != NULL)
	{
		temp = actual_node->next;
		ft_lstdelone(actual_node, del);
		actual_node = temp;
	}
	*lst = NULL;
}
