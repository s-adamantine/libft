/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 21:43:10 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/14 21:53:27 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (ft_strlen(s1) < ft_strlen(s2))
		return (-1);
	while (n-- > 0 && s1[i])
	{
		if (s1[i] == s2[i])
			i++;
		else if ((unsigned long)s1[i] < (unsigned long)s2[i])
			return (-1);
		else
			return (1);
	}
	return (0);
}
