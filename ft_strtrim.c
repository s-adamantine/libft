/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 16:45:10 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/29 17:52:56 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	check_end(char const *s)
{
	while (*s)
	{
		if (*s == ' ' || *s == '\n' || *s == '\t')
		{
			s++;
		}
		else
		{
			return (-1);
		}
	}
	return (1);
}

char		*ft_strtrim(char const	*s)
{
	int		len;
	char	*str;
	char	*trimmed;

	len = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		s++;
	}
	str = (char *)s;
	while (*s)
	{
		if (*s == ' ' || *s == '\n' || *s == '\t')
		{
			if (check_end(s) > 0)
			{
				trimmed = (char *)malloc(sizeof(char)*(len + 1));
				if (trimmed)
				{
					trimmed = ft_strncpy(trimmed, str, len);
					trimmed[len] = '\0';
					return (trimmed);
				}
				return (NULL);
			}
			else
			{
				len++;
				s++;
			}
		}
		len++;
		s++;
	}
	trimmed = (char *)malloc(sizeof(char)*(len + 1));
	if (trimmed)
	{
		trimmed = ft_strncpy(trimmed, str, len);
		trimmed[len] = '\0';
		return (trimmed);
	}
	return (NULL);
}
