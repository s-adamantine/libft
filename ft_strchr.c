/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 09:42:05 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/09 11:06:26 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned long i;

	i = 0;
	while(i < ft_strlen(s))
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
