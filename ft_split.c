/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaoufik <ytaoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:54:20 by ytaoufik          #+#    #+#             */
/*   Updated: 2026/10/24 23:59:41 by ytaoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static size_t count_words(char const *s, char c)
{
	size_t  i;
	size_t count ; 
	
	i = 0;
	count = 0;
	while(s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char *cpy(char const *s,char c ,size_t start)
{
	size_t i;

	i = start;
	while (s[i] && s[i] != c)
		i++;
	return(ft_substr(s, start, i - start));
}

static void freesplit(char **big_str, size_t j)
{
	size_t i;

	i = 0;
	while (i < j)
	{
		free(big_str[i]);
		i++;
	}
	free(big_str);
}

static char **fill_words(char **big_str, char const *s, char c, size_t len_bigstr)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (j < len_bigstr)
	{
		while (s[i] && s[i] == c)
			i++;
		big_str[j] = cpy(s, c, i);
		if (!big_str[j])
		{
			freesplit(big_str, j);
			return (NULL);
		}	
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	return (big_str);
}

char **ft_split(char const *s, char c)
{
	size_t len_bigstr;
	char **big_str;

	len_bigstr = count_words(s, c);
	big_str = malloc(sizeof(char *) * (len_bigstr + 1));
	if (!big_str)
		return (NULL);
	big_str = fill_words(big_str, s, c, len_bigstr);
	if (!big_str)
		return(NULL);
	big_str[len_bigstr] = NULL;
	return (big_str);
}
