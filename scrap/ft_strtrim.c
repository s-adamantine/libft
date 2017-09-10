/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 18:56:50 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/09 19:05:20 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (*s++)
	{
		if (*s == '\n' || *s == '\t' || *s == ' ')
			;
		else
			len++;
	}
	str = (char *)malloc(sizeof(char)*(len + 1));
	if (str)
	{
		if (*s == '\n' || *s == '\t' || *s == ' ')
		{
			s++;
		}
		while (*s != '\n' || *s != '\t' || *s != ' ')
		{
			str[i++] = *s++;
		}
		str[i] = '\0';
		return (str);
	}
	return NULL;
}
