/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:54:49 by sadamant          #+#    #+#             */
/*   Updated: 2017/10/02 15:11:50 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	n;

	n = len - ft_strlen(small) + 1;
	if (ft_strcmp(small, "") == 0)
	{
		return ((char *)big);
	}
	while (*big && n--)
	{
		if (*big == *small)
		{
			if (ft_strncmp(big, small, ft_strlen(small)) == 0)
			{
				return ((char *)big);
			}
		}
		big++;
	}
	return (NULL);
}
