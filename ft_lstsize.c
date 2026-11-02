/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:19:44 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/11/02 13:27:40 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	int	ft_lstsize(t_list *lst)
{
	unsigned int	count;
	t_list			*currentnode;

	currentnode = lst;
	count = 0;
	while (currentnode)
	{
		count++;
		currentnode = currentnode->next;
	}
	return (count);
}

// int main()
// {
//     int a;
//     int b;
//     int c;
//     t_list *first;
//     t_list *second;
//     t_list *third;

//     first = ft_lstnew(&a);
//     second = ft_lstnew(&b);
//     third = ft_lstnew(&c);
//     first->next = second;
//     second->next = third;
//     third->next = NULL;
//     printf("%d", ft_lstsize(first));
//     free(first);
//     free(second);
//     free(third);
// }