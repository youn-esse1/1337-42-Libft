/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 19:41:43 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/10/17 22:47:15 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t lendst;

	i = 0;
	while (i < dstsize && dst[i])
		i++;
	lendst = i;
	j = 0;
	if (dstsize == i)
		return (ft_strlen(src) + dstsize);
	if (dstsize > 0)
	{
		while (src[j] && i < dstsize - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (lendst + ft_strlen(src));
}
