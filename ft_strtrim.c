/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 22:20:07 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/10/20 18:15:38 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	exist_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	len;
	char	*cpy_s1;

	start = 0;
	end = ft_strlen(s1);
	while (start < end && exist_set(s1[start], set))
		start++;
	while (start < end && exist_set(s1[end -1], set))
		end--;
	len = end - start ;
	cpy_s1 = malloc(len + 1);
	if (!cpy_s1)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cpy_s1[i] = s1[start + i];
		i++;
	}
	cpy_s1[i] = '\0';
	return (cpy_s1);
}
