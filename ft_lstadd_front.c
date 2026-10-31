/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:40:21 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/10/30 17:18:12 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;
}

// int	main(void)
// {
// 	int		a;
// 	int		b;
// 	t_list	*head;
// 	t_list	*new;

// 	a = 10;
// 	b = 20;
// 	head = ft_lstnew(&a);
//     printf("First node before: %p\n", (int *)head->content);
// 	if (!head)
// 		return (1);
// 	new = ft_lstnew(&b);
//     printf("new node before: %p\n", (int *)new->content);
// 	if (!new)
// 	{
// 		free(head);
// 		return (1);
// 	}
// 	ft_lstadd_front(&head, new);
//     printf("First node after: %p\n", (int *)head->content);
// 	printf("First node : %d\n", *(int *)head->content);
//     printf("new node after: %p\n", (int *)new->content);
// 	printf("Second node: %d\n", *(int *)head->next->content);

// 	free(new);
// 	free(head->next);
// 	return (0);
// }
    