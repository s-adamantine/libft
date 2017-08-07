/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:34:19 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/05 14:37:15 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char(*f)(char))
{
	char *s2;

	s2 = (char const *)malloc(sizeof(char const)*(ft_strlen(s) + 1));
	while (*s)
		*s2++ = f(*s++);
	return (s2);	
}
