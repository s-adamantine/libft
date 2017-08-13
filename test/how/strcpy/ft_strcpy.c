/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:21:47 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/05 06:36:00 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
//    if (ft_strlen(dst) < ft_strlen(src))
  //      ft_puterr("Abort trap: 6");
    while (*src)
        *dst++ = *src++;
	return (dst);
}
