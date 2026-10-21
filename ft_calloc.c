/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 00:27:44 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/10/18 19:37:53 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	unsigned char *ptr;
	size_t i;
	
	if (count == 0 || size == 0)
		return (malloc(1));	
	if (count  > (size_t)-1 / size)
		return (NULL);
	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while(i < count * size)
		ptr[i++] = 0;
	return (ptr);
}
