/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 13:08:30 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/27 13:13:53 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
	printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
}
