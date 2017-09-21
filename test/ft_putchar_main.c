/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 15:27:29 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/09 15:31:07 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int fd;

	fd = open(argv[1], O_RDWR);
	ft_putchar_fd('c', fd);
	close(fd);
	return (0);
}
