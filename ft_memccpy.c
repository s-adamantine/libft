/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 18:25:46 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/08 20:11:02 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char dst;
	unsigned char source;

	while (i < n)
	{
		dst[i] = source[i];
		if (source[i] == c)
			return(dst + 1);	
	}
	return (NULL);
}
