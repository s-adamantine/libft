/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:27:27 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/21 16:31:29 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_last(const char *s, int c)
{
	while (*s++)
	{
		if (*s == c)
			return (-1);
	}
	return (1);
}

char	*ft_strrchr(const char *s, int c)
{
	while (*s && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		if (is_last(s, c) == -1)
		{
			ft_strrchr(s, c);
		}
		else
		{
			return ((char *)s);
		}
	}
	return (NULL);
}
