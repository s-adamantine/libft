/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 13:03:30 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/30 15:46:48 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = "the cake is a lie !\0I'm hidden lol\r\n";
	char	s1[50];
	char	s2[50];
	size_t	max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");

	strcpy(s1, "there is no stars in the sky");
	strcpy(s2, "there is no stars in the sky");
	printf("strlcat : %zu\n", strlcat(s1, str, max));
	printf("strlcat dest: %s\n", s1);
	printf("ft_strlcat: %zu\n", ft_strlcat(s2, str, max));
	printf("ft_strlcat dest: %s\n", s2);
	return (0);
}
