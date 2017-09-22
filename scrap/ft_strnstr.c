/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:54:49 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/21 20:09:29 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	check_substring(const char *haystack, const char *needle)
{
	while (*needle)
	{
		if (*haystack++ == *needle++)
			;
		else
			return (-1);
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (ft_strcmp(needle, "") == 0)
	{
		return ((char *)haystack);
	}
	while ((len - ft_strlen(needle)) > 0)
	{
		printf("%zu\n", len);
		printf("%zu\n", ft_strlen(needle));
		printf("%lu\n", (len-- - ft_strlen(needle)));
		if (*haystack == *needle)
		{
			if (check_substring(haystack, needle) > 0)
			{
				return ((char *)haystack);
			}
		}
		haystack++;
		len--;
	}
	return (NULL);
}
