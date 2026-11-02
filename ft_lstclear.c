/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 19:58:36 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/11/02 13:29:01 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*clrcurrent;

	if (!lst || !*lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		clrcurrent = current;
		del(current->content);
		current = current->next;
		free(clrcurrent);
	}
	*lst = NULL;
}
