/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:34:19 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/19 16:29:24 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char(*f)(char))
{
	char *s2;

	s2 = (char *)malloc(sizeof(char)*(ft_strlen(s) + 1));
	if (s2)
		while (*s)
			*s2++ = f((char)s++);
	return (s2);
}
