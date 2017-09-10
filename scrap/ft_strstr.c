/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 20:04:34 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/10 10:35:45 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	size_t i;

	i = 0;
	while (*haystack)
	{
		if (*haystack++ == *needle++)
		{
			while(i < ft_strlen(needle))
			{
				if (haystack[i++] == *needle++)
					;
				else
					return NULL;
			}
			return ((char	*)haystack);
		}
	}
	
	return NULL;
}
