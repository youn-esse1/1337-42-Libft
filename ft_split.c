/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:54:20 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/10/21 22:32:11 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static	size_t	count(char const *s, char c)
{
	size_t	countt;
	size_t	i;
	
	countt = 0;
	i = 0;
	while (s[i])
	{
		while(s[i] && s[i] == c)
			i++;
		if(s[i] && s[i] != c)
			countt++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (countt); 
}

static char	*cpy(char const *s, char c, size_t start )
{
	size_t i;
	size_t len;

	i = start;
	while (s[i] && s[i] != c)
		i++;
	len = i - start;
	
	return(ft_substr(s, start, len));
}

static void freesplit(char **s, size_t j)
{
	size_t f;
	
	f = 0;
	while (f < j)
	{
		free(s[f]);
		f++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char **big_str;
	size_t	biglen;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	biglen = count(s, c);
	big_str = malloc((biglen + 1) * sizeof(char *));
	if (!big_str)	
		return (NULL);
	while (j < biglen)
	{
		while (s[i] && s[i] == c)
			i++;
		big_str[j] = cpy(s,c,i);
		if (!big_str[j])
		{
			freesplit(big_str,j);
			return(NULL);
		}
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	big_str[j] = NULL;
	return (big_str);
}
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("hello,dsg,dsf,dsf,sf", ',');
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}