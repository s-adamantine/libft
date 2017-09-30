/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 20:50:10 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/29 20:50:14 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	if (size > ft_strlen(dest))
	{
		dest = dest + ft_strlen(dest);
		size = size - ft_strlen(dest);
		while (*src && size--)
		{
			*dest++ = *src++;
		}
		*dest = '\0';
		return (ft_strlen(dest) + ft_strlen(src));
	}
	else
	{
		return (size + ft_strlen(src));
	}
}

