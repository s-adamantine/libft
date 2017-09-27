/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:43:20 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/25 16:09:11 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	test[50];

	ft_strcpy(test, argv[1]);
	ft_strsplit(test, ' ');
	return (0);
}
