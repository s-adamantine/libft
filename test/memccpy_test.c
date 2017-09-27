/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 17:36:35 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/27 11:36:31 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	src[50];
	char	dest1[50];
	char	dest2[50];

	printf("%s\n", memccpy(argv[1], argv[2], atoi(argv[3]), atoi(argv[4])));
	printf("%s\n", ft_memccpy(argv[1], argv[2], atoi(argv[3]), atoi(argv[4])));
	return (0);
}
