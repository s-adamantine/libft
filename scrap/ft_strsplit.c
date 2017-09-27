/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 10:11:30 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/25 17:12:54 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	last_delimiter(char const *s, char c, int i)
{
	while (s[i] == c)
	{
		i++;
	}
	return (i);
}

static int	count_words(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 1;
	if (s[i] == '\0')
	{
		return (0);
	}
	while (s[i] == c)
	{
		i++;
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			i = last_delimiter(s, c, i);
			count++;
		}
		else
		{
			i++;
		}
	}
	return (count);
}

static char	*word(char const *s, char c, int *i)
{
	int		len;
	char	*res;

	len = 0;
	while (s[i] != c)
	{
		len++;
	}
	res = (char *)malloc(sizeof(char)*len);

}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	*str;
	char	**split;

	i = 0;
	split = (char **)malloc(sizeof(char *)*(count_words(s, c) + 1));
	str = *split;
	if (s[i] == c)
	{
		i = last_delimiter(s, c, i);
	}
	while (s[i])
	{
		while (s[i] != c)
		{
			*str++ = s[i++];
			split++;
		}
		i++;
		printf("%d\n", i);
	}
	return (split);
}
