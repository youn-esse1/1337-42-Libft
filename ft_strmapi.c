/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 18:27:35 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/10/25 19:47:57 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t    len;
    size_t    i;
    char    *str;

    len = ft_strlen(s);
    i = 0;
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    while (i < len)
    {
        str[i] = f((unsigned int)i, s[i]);
        i++;
    }
    str[len] = '\0';
    return (str);
}
