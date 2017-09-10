/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 17:56:36 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/08 18:02:01 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *src = "what's going on!";
	char dest[22];

	ft_memcpy(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}
