/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 21:48:44 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/08 22:22:47 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int ncpy;
	int len;
	int sign;
	char *res;

	len = 0;
	sign = 0;
	ncpy = n;
	if (ncpy < 0)
	{
		ncpy = ncpy * -1;
		len++;
		sign--;
	}
	while (ncpy > 0)
	{
		ncpy = ncpy / 10;	
		len++;
	}
	res = (char *)malloc(sizeof(char)*(len + 1));
	if (!res)
		return NULL;
	res[len] = '\0';
	while (len > 0)
	{
		printf("%d", n % 10);
		res[len--] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign < 0)
		res[0] = '-';
	return (res);
}
