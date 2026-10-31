/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 21:12:54 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/10/29 21:39:45 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list	*new;

    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
	new->next = NULL;
	return (new);
}

// int main()
// {
//     int number;
//     t_list *new;
    
//     number = 1337;
//     new = ft_lstnew(&number);
//     if(!new)
//         return (1);
//     printf("%p\n", (void *)new);
//     printf("%p\n", (void *)&new);
//     printf("%p\n", new->content);
//     printf("Content value: %d\n", *(int *)new->content);
//     free(new);
//     return (0);    
// }