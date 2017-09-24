/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 18:47:08 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/23 18:05:55 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				len;
	unsigned char		ch;
	const unsigned char *source;

	len = 0;
	source = (const unsigned char *)src;
	ch = (unsigned char)c;
	while (source[len] != ch)
	{
		len++;
	}
	if (n < len)
	{
		ft_memcpy(dest, src, len);
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
