/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 18:25:46 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/08 20:04:49 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		*(unsigned char *)dest++ = *(unsigned char *)src++;
		if (*(unsigned char *)src == (unsigned char)c)
			return (dest++);
	}
	return (NULL);
}
