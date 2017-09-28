/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:54:49 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/27 17:44:39 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	n = len - ft_strlen(needle) + 1;
	if (ft_strcmp(needle, "") == 0)
	{
		return ((char *)haystack);
	}
	while (*haystack && n--)
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
			{
				return ((char *)haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
