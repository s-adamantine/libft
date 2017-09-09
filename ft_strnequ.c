/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 18:08:20 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/09 18:11:36 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const*s1,char const*s2, size_t n)
{
	int i;

	i = 0;
	if (ft_strlen(s1) == ft_strlen(s2))
	{
		while (n-- > 0)
		{
			if (s1[i] == s2[i])
			{
				i++;
			}
			return (1);
		}
	}
	return (0);
}
