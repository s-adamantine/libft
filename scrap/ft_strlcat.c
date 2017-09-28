/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 17:46:59 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/27 21:27:41 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	n;
	size_t	ret;

	ret = 0;
	n = size - ft_strlen(dest) - 1;
	while (*dest)
	{
		dest++;
		ret++;
		n--;
	}
	while (*src && n--)
	{
		*dest++ = *src++;
		ret++;
	}
	*dest = '\0';
	return (ret);
}
