/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 17:36:35 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/23 17:37:50 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	memccpy(argv[1], argv[2], atoi(argv[3]), atoi(argv[4]));
	ft_memccpy(argv[1], argv[2], atoi(argv[3]), atoi(argv[4]));
	return (0);
}
