/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 22:42:05 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/23 23:43:30 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 0;
	while (!ft_isdigit(str[i]))
	{
		if (ft_isalpha(str[i]) || str[i] )
			return (0);
		i++;
	}
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
		nb = (nb * 10) + (str[i++] - '0');
	if (sign < 0)
		return (-nb);
	return (nb);
}
