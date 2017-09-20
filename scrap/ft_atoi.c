/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:11:39 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/17 18:20:02 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int nb;
	int sign;
	
	i = 0;
	nb = 0;
	sign = 0;
	while (str[i] < 33)
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + (str[i++] - '0');
	if (sign < 0)
		return (-nb);
	return (nb);
}
