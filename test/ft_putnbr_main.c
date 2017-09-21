/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 08:51:18 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/09 15:44:49 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int fd;

	fd = open("output", O_RDWR);
	printf("%d\n", fd);
	ft_putnbr_fd(atoi(argv[1]), fd);
	ft_putchar('\n');
	return (0);
}
