/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 21:38:56 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/11/02 13:43:12 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*ww_node;
	void	*fcontent;

	result = NULL;
	if (!(lst && del && f))
		return (NULL);
	while (lst)
	{
		fcontent = f(lst->content);
		ww_node = ft_lstnew(fcontent);
		if (!ww_node)
		{
			del(fcontent);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, ww_node);
		lst = lst->next;
	}
	return (result);
}
