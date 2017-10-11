/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 13:26:24 by sadamant          #+#    #+#             */
/*   Updated: 2017/10/11 13:26:25 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcchr(char *s, int c)
{
    int count;

    count = 0;
    while (*s)
    {
        if ((unsigned char)*s == (unsigned char)c)
        {
            count++;
        }
        s++;
    }
    return (count);
}
