/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 00:33:48 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/10/26 00:47:13 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char    c;
    
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        n *= -1;
        ft_putchar_fd('-', fd);
    }
    if (n > 9)
        ft_putnbr_fd(n / 10, fd);
    c = n % 10 + '0';
    ft_putchar_fd(c, fd);
}

