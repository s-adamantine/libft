/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:34:19 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/09 11:34:37 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char(*f)(char))
{
	char *s2;

	s2 = (char *)malloc(sizeof(char)*(ft_strlen(s) + 1));
	while (*s)
		*s2++ = f(*s++);
	return (s2);	
}
