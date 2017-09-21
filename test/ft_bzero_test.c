/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 12:31:46 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/08 13:03:40 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char 	*str = "this is a test";
	void	*ptr = &str[2];

	bzero(ptr, 2);
	printf("%s\n", str);
	return (0);
}
