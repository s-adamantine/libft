/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 20:09:55 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/23 22:32:50 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	str[50];

	ft_strcpy(str, "testing");
	printf("%s\n", memset(str, 'a', 3));
	printf("%s\n", ft_memset(str, 'a', 3));
	return (0);
}
