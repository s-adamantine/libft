/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 22:42:48 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/03 17:39:27 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *s);

int	main(int argc, char **argv)
{
	printf("%zu", strlen(argv[1]));
	printf("%zu", ft_strlen(argv[1]));
	return (0);
}
