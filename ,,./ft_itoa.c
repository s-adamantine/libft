/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 21:48:44 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/19 20:07:49 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		num_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;	
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char 	*res;

	len = num_len(n);
	res = (char *)malloc(sizeof(char)*(len + 1));
	if (!res)
		return NULL;
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n = n * -1;
	}
	while (--len >= 0)
	{
		res[len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}
