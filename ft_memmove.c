/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 12:05:13 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/22 18:44:30 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	void	*temp;

	temp = (void *)malloc(sizeof(void)*len);
	ft_memcpy(temp, src, len);
	ft_memcpy(dest, temp, len);
	free (temp);
	return (dest);
}
