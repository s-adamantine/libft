/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 09:10:30 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/16 09:26:47 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int				i;
	int				n;
	unsigned long	len;

	len = 0;
	while (s[i])
	{
		if ((unsigned long)s[i] == c)
		{
			
			len = 0;
		}
		i++;
		len++;
	}
}
