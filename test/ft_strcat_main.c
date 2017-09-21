/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 22:41:58 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/13 23:00:14 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char 		*dest = "";

	strcat(dest, argv[1]);
//	ft_strcat(dest, argv[1]);
	printf("%s\n", argv[1]);
	return (0);
}
