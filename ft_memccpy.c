/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 11:43:02 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/27 11:51:58 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest1, const void *src1, int c1, size_t n)
{
	unsigned char		c;
	unsigned char		*dest;
	const unsigned char	*src;

	c = c1;
	dest = dest1;
	src = src1;
	while (n--)
	{
		*dest = *src;
		if (*src == c)
		{
			return (dest + 1);
		}
		src++;
		dest++;
	}
	return (NULL);
}
