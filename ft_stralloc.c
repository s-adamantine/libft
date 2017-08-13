/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stralloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 12:45:00 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/13 12:45:06 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stralloc(char *str)
{
	char	*stralloced;

	stralloced = (char *)malloc(sizeof(char)*(ft_strlen(str) + 1));
	return (stralloced);	
}
