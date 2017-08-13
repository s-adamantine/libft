/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:00:55 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/03 18:09:05 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	char	*str = "testings";
	ft_putstr(str);
	ft_putchar('t');
	ft_putchar('\n');
	ft_putstr(str);
	ft_putchar('t');
	ft_putchar('\n');
	return (0);
}
