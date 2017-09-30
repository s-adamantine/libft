/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 13:03:30 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/30 14:06:47 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[4] = "";
	char	s2[4] = "";

	printf("%zu\n", ft_strlen("thx to ntoniolo for this test!"));
	printf("%zu\n", strlcat(s1, "thx to ntoniolo for this test!", 4));
	printf("%zu\n", ft_strlcat(s2, "thx to ntoniolo for this test!", 4));
	return (0);
}
