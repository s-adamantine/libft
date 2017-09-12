/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 20:43:12 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/10 20:49:41 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*temp;
	char	*destcpy;

	i = 0;
	temp = (char *)malloc(sizeof(char)*(ft_strlen(src) + 1));
	destcpy = dest;
	while (*(char *)src)
	{
		temp[i] = *(char *)src++;
		i++;
	}
	while (n-- > 0)
	{
		*(char *)dest++ = *temp++;
	}
	return (destcpy);
}
