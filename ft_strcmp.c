/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 06:56:31 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/14 21:56:37 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;	
	if (ft_strlen(s1) < ft_strlen(s2))
		return (-1);
	else if (ft_strlen(s1) > ft_strlen(s2))
		return (1);
	while (s1[i])
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
