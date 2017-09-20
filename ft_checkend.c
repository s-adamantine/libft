/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:23:34 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/19 02:58:55 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_whitespace(char	*s)
{
	if (*s == '\n' || *s == '\t' || *s == ' ')
		return (1);
	else
		return (-1);
}

int		check_end(char	*s)
{
	while (*s)
	{
		if (is_whitespace(s) > 0)
		{
			s++;
		}
		else
		{
			return (-1);
		}
	}
	return (1);
}
