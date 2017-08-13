/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 06:06:26 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/13 12:00:10 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char	*s2;
	char	*s2cpy;

	s2 = (char *)malloc(sizeof(char)*(ft_strlen(s1) + 1));
	ft_strcpy(s2, s1);
	s2cpy = s2;
	free(s2);
	return (s2cpy);
}
