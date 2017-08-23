/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 07:03:53 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/13 23:13:59 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
//	if (!dest || !src)
//		return (dest);
	while (ft_isprint(*dest) == 1)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
