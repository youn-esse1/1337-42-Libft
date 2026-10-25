/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 00:16:24 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/10/25 18:23:17 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


static  size_t  count_dig(int n)
{
    int count;
    
    count = 1;
    if (n < 0)
        count++;
    while (n > 9 || n < -9)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

static  void    fillit(int n, size_t nb_dig, char *str)
{
    size_t i;
    
    i = nb_dig;
    if (n < 0)
    {
        str[0] = '-';
        while (i > 1)
        {
            i--;
            str[i] = -(n % 10) + '0';
            n = n / 10;
        }
    }
    else 
    {
        while (i > 0)
        {
            i--;
            str[i] = n % 10 + '0';
            n = n / 10;
        }
    }
    str[nb_dig] = '\0';
}

char *ft_itoa(int n)
{
    char    *str;
    size_t  nb_dig;
    
    nb_dig = count_dig(n);
    str = malloc(nb_dig + 1);
    if (!str)
        return (NULL);
    fillit(n, nb_dig, str);
    return (str);
}
