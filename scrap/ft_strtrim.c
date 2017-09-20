/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 18:56:50 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/19 03:22:36 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		is_whitespace(char	*s)
{
	if (*s == '\n' || *s == '\t' || *s == ' ')
		return (1);
	else
		return (0);
}

int		is_end(char	*s)
{
	while (*s)
	{
		if (is_whitespace(s) > 0)
			s++;
		else
			return (-1);
	}
	return (1);
}

int		grab_length(char	*s)
{
	int	len;

	len = 0;
	while (*s++)
	{
		while (is_whitespace(s) > 0)
			;
		if (is_whitespace(s) < 0)
		{
			len++;
		}
		else if (is_whitespace(s) > 0)
		{
			if (is_end(s) < 0)
			{
				len++;
			}
			else
			{
				return (len);
			}
		}
	}
	return (len);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char)*(grab_length(s) + 1));
	if (str)
	{
		while (*s)
		{
			if (*s != ' ')
			{ 
				if (check_end(*s) > 0)
				{
					str[i] = *s;
					i++;
				}
			}
			s++;
		}
		str[i] = '\0';
		return (str);
	}
	return NULL;
}
