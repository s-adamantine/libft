/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:43:20 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/28 01:33:20 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	test[50];
	char	**res;

	ft_strcpy(test, argv[1]);
	res = ft_strsplit(test, ' ');
	while (*res)
	{
		printf("%s\n", *res++);	
	}
	return (0);
}
