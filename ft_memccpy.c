/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 11:43:02 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/30 17:10:06 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	unsigned char		ch;
	unsigned char		*dst;
	const unsigned char	*src;

	ch = c;
	dst = dest;
	src = source;
	while (n--)
	{
		*dst = *src;
		if (*src == ch)
		{
			return (dst + 1);
		}
		src++;
		dst++;
	}
	return (NULL);
}
